# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    find_nicolas_bauer.sh                              :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mzhurba <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/19 20:16:47 by mzhurba           #+#    #+#              #
#    Updated: 2018/07/19 20:22:20 by mzhurba          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cat $1 | grep -i "nicolas	bauer" | awk '{print $(NF-1)}' | grep '-'
