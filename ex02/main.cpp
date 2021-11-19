/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjung <mjung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 20:22:55 by mjung             #+#    #+#             */
/*   Updated: 2021/11/19 21:28:47 by mjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
/*
 *  >>> 레퍼런스 연습 과제
 * "HI THIS IS BRAIN" 이라는 내용물을 담은 문자열을 생성하는 프로그램을 생성
 * - 문자열의 주소를담은 stringPTR을 생성
 * - 문자열의 참조를 담은 stringREF 생성
 * - 문자열의 메모리상 주소를 출력
 * - stringPTR을 이용하여 문자열의 주소를 출력
 * - strinfgREF를 이용하여 문자열의 주소를 출력
 * - 문자열을 포인터로 이용하여 출력
 * - 문자열을 참조를 이용하여 출력
 */;

int main(void)
{
	char text[] = "HI THIS IS BRAIN";
	std::string str = "HI THIS IS BRAIN";

	char *stringPTR = text;
	std::string& stringREF = str;

	std::cout << "text address : " << text << std::endl;
	std::cout << "stringPTR address : " << stringPTR << std::endl;
	std::cout << "stringREF address : " << stringREF << std::endl;

	std::cout << "using stringPTR : " << stringPTR << std::endl;
	std::cout << "using stringREF : " << stringREF << std::endl;

	return (0);
}