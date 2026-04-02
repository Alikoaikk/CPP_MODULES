/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 09:27:16 by akoaik            #+#    #+#             */
/*   Updated: 2025/12/29 23:54:05 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <fstream>
#include <iostream>

int replace(char **argv, const std::string &str)
{
    std::string 	inputFile = argv[1];
    std::string 	search = argv[2];
    std::string 	replaceWith = argv[3];
    std::ofstream 	outfile ;
	
	{
		std::string		fileName;
		fileName = inputFile + ".replace" ;
		outfile.open(fileName.c_str());
	}
    if (!outfile.is_open())
        return 1;

    for (size_t i = 0; i < str.length();)
    {
        if (str.compare(i, search.length(), search) == 0)
        {
            outfile << replaceWith;
            i += search.length();
        }
        else
        {
            outfile << str[i];
            i++;
        }
    }

    outfile.close();
    return 0;
}

int	main(int argc, char **argv)
{
	char			c;
	std::ifstream	infile;
	std::string		str;
	int 			exit ;

	if (argc != 4)
	{
		std::cout << "usage: replace <file> old_word new_word" << std::endl;
		return (1);
	}
	
	infile.open(argv[1]);
	
	if (infile.fail())
	{
		std::cout << "Error: " << argv[1] << ":"
			<< " no such file or directory" 
			<< std::endl;
		return (1);
	}


	while(infile >> std::noskipws >> c)
		str += c;
	infile.close();

	exit = replace(argv, str);
	return (exit);
}