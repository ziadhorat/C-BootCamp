# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    find_nicolas_bomber.sh                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zmahomed <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/21 17:05:06 by zmahomed          #+#    #+#              #
#    Updated: 2019/02/21 18:57:17 by zmahomed         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cat $1 | grep -i "nicolas" | grep -i "bomber" | grep -v "nicolasbomber" | awk -F'\t' '{print $3}' | awk -F'[^0-9]*' '$1'
cat $1 | grep -i "nicolas"  | grep -i "bomber" | grep -v "nicolasbomber" | grep -o '[0-9]*-[0-9]*-[0-9]*-[0-9]*'
