# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    strlen.sh                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juyolee <juyolee@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/11 10:17:13 by juyolee           #+#    #+#              #
#    Updated: 2022/02/11 10:18:48 by juyolee          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
#!/bin/sh
# zsh strlen.sh

string=(echo $FT_LINE)

if [ "$string" ]; then
	echo -n $FT_LINE | wc -m
fi