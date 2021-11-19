/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjung <mjung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 20:43:43 by mjung             #+#    #+#             */
/*   Updated: 2021/11/19 20:43:58 by mjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <ostream>
#include <cstring>

/*
 * < replace 프로그램 만들기 >
 * 시용 예제) ./replace file a b
 * abc 파일안에서 문자열 a를 b로 바꾸고 file.replace로 파일을 저장하라
 *
 * std::string 의 replace는 사용하지 못한다.
 */
std::string fileRead(std::ifstream &readFile)
{
	std::string s;

	// 파일 읽기
	// 위치 지정자를 파일 끝으로 옮긴다.
	readFile.seekg(1, std::ios::end);
	// 그리고 그 위치를 읽는다 (파일의 크기)
	int size = readFile.tellg();
	// 그 크기의 문자열을 할당한다.
	s.resize(size);
	// 위치 지정자를 다시 맨 앞으로 옮긴다.
	readFile.seekg(0, std::ios::beg);
	// 파일 전체 내용을 읽어서 문자열에 저장한다.
	readFile.read(&s[0], size);

	return (s);
}

void ftReplace(std::ifstream &readFile, std::string &contents, char *s1, char *s2)
{
	std::string::size_type targetStrLen = (strlen(s1));
	std::string::size_type pos;

	pos = contents.find(s1,0, targetStrLen);
	while(pos != std::string::npos)
	{
		// 바꿀 대상을 찾은 경우
		contents.erase(pos, targetStrLen);
		contents.insert(pos,s2);

		// 포지션 변경
		pos = pos + targetStrLen;
		pos = contents.find(s1,pos, targetStrLen);
	}
}


int main(int argc, char **argv)
{
	std::ifstream readFile;
	std::ofstream writeFile;
	std::string newFile;

	if (argc != 4)
	{
		std::cout << "[Error] 인자값의 수가 맞지 않습니다." << std::endl;
		exit(1);
	}

	newFile = argv[1];
	newFile.append(".replace");
	readFile.open(argv[1]);
	writeFile.open(newFile);

	if (!readFile || !(readFile.is_open()) | !(writeFile.is_open()))
	{
		std::cout << "[Error] 파일을 읽을 수 없습니다." << std::endl;
		readFile.close();
		exit(1);
	}

	// 입력받은 파일 내용 읽어오기
	std::string FileContents;
	FileContents = fileRead(readFile);

	// 문자열 변경
	ftReplace(readFile, FileContents, argv[2], argv[3]);

	// 파일 출력
	writeFile.write(FileContents.c_str(), FileContents.size());

	readFile.close();
	writeFile.close();
}