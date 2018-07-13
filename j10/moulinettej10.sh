clear
printf "ex00: Good luck"
printf "\nex01: "

if [ -e ex01/ft_foreach.c ]
then

nb=`cd ex01 && ls | wc -l`;

if [ $nb -ne 1 ]
    then
    printf "KO...undesirable files in ex01 | ";
fi

####### IF FILE EXIST #######
cd ex01
flag=`norminette ft_foreach.c`
source="Error"
source2="youwillneverfindme"
if { echo "$flag"  | grep -q "$source" || echo "$flag"  | grep -q "$source2"; } then
    printf "Norme...KO | ";
else
    printf "Norme...OK | ";
fi

cat <<EOF>>gcctest.c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnguyen <vnguyen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/18 22:49:33 by vnguyen           #+#    #+#             */
/*   Updated: 2015/08/18 22:55:31 by vnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void    ft_foreach(int *tab, int length, void (*f)(int));

void    print_tab(int nb)
{
    printf("%d", nb);
}

int     main(void)
{
    int *tab;
    int i;

    tab = (int*)malloc(sizeof(int) * 10);
    i = 0;
    while (i < 10)
    {
        tab[i] = i;
        i++;
    }
    ft_foreach(tab, 10, print_tab);
    return (0);
}
EOF

if cat ft_foreach.c | grep -q "#include"
    then
    printf "KO...undesirable include in ft_foreach.h | "
fi

gcc -Wall -Wextra -Werror ft_foreach.c gcctest.c -o gcctest &> gccout
flag=`cat gccout`
source="error:"

if echo "$flag" | grep -q "$source"
then
    printf "Does not compile";
else
    b=$(./gcctest)
    if [ "$b" = "0123456789" ]
	then
	printf "Testing...OK"
    else
        printf "Testing...KO";
    fi
    rm gcctest
fi

rm gccout
rm gcctest.c

##### IF FILE DOES NOT EXIST #####
else
    printf "KO... Wrong file name or file does not exist."
fi


#################### BEGIN EXO 02 ####################
cd ..
printf "\nex02: "

if [ -e ex02/ft_map.c ]
then

nb=`cd ex02 && ls | wc -l`;

if [ $nb -ne 1 ]
    then
    printf "KO...undesirable files in ex02 | ";
fi

####### IF FILE EXIST #######
cd ex02
flag=`norminette ft_map.c`
source="Error"
source2="youwillneverfindme"
if { echo "$flag"  | grep -q "$source" || echo "$flag"  | grep -q "$source2"; } then
    printf "Norme...KO | ";
else
    printf "Norme...OK | ";
fi

cat <<EOF>>gcctest.c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnguyen <vnguyen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/18 14:34:54 by vnguyen           #+#    #+#             */
/*   Updated: 2015/08/18 17:03:00 by vnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int     *ft_map(int *tab, int length, int (*f)(int));

int     x2(int a)
{
    return (2 * a);
}

int     main(void)
{
    int array[10] = {0,1,2,3,4,5,6,7,8,9};
    int *new_array;
    int i;

    i = 0;
    new_array = ft_map(array, 10, x2);
    while (i < 10)
    {
        printf("%d ", new_array[i]);
        i++;
    }
    return (0);
}
EOF

if cat ft_map.c | grep -q "#include <stdio"
    then
    printf "KO...undesirable include in ft_map.c | "
fi

gcc -Wall -Wextra -Werror ft_map.c gcctest.c -o gcctest &> gccout
flag=`cat gccout`
source="error:"

if echo "$flag" | grep -q "$source"
then
    printf "Does not compile";
else
    b=$(./gcctest)
    if [ "$b" = "0 2 4 6 8 10 12 14 16 18 " ]
        then
        printf "Testing...OK"
    else
        printf "Testing...KO";
    fi
    rm gcctest
fi

rm gccout
rm gcctest.c

##### IF FILE DOES NOT EXIST #####
else
    printf "KO... Wrong file name or file does not exist."
fi
####################   END EX 02   ####################

####################  BEGIN EX 03 #####################
cd ..
printf "\nex03: "

if [ -e ex03/ft_any.c ]
then

nb=`cd ex03 && ls | wc -l`;

if [ $nb -ne 1 ]
    then
    printf "KO...undesirable files in ex03 | ";
fi

####### IF FILE EXIST #######
cd ex03
flag=`norminette ft_any.c`
source="Error"
source2="youwillneverfindme"
if { echo "$flag"  | grep -q "$source" || echo "$flag"  | grep -q "$source2"; } then
    printf "Norme...KO | ";
else
    printf "Norme...OK | ";
fi

cat <<EOF>>gcctest.c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnguyen <vnguyen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/18 17:07:22 by vnguyen           #+#    #+#             */
/*   Updated: 2015/08/18 17:30:17 by vnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int ft_any(char **tab, int(*f)(char*));

int yolow(char *str)
{
    if (str[0] == 'c')
        return (1);
    return (0);
}

void    ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
}

int main(void)
{
    char **array;
    int i;

    array = (char**)malloc(sizeof(char*) * 5);
    i = 0;
    while (i < 8)
    {
        array[i] = (char*)malloc(sizeof(char) * 9);
        ft_strcpy(array[i], "yolow");
        i++;
    }
    ft_strcpy(array[7], "cho");
    array[8] = 0;
    printf("%d", ft_any(array, yolow));
    ft_strcpy(array[7], "yolow");
    printf("%d", ft_any(array, yolow));
    return (0);
}
EOF

if cat ft_any.c | grep -q "#include"
    then
    printf "KO...undesirable include in ft_any.c | "
fi

gcc -Wall -Wextra -Werror ft_any.c gcctest.c -o gcctest &> gccout
flag=`cat gccout`
source="error:"

if echo "$flag" | grep -q "$source"
then
    printf "Does not compile";
else
    b=$(./gcctest)
    if [ "$b" = "10" ]
        then
        printf "Testing...OK"
    else
        printf "Testing...KO";
    fi
    rm gcctest
fi

rm gccout
rm gcctest.c

##### IF FILE DOES NOT EXIST #####
else
    printf "KO... Wrong file name or file does not exist."
fi


#################### BEGIN EXO 04 ####################
cd ..
printf "\nex04: "

if [ -e ex04/ft_count_if.c ]
then

nb=`cd ex04 && ls | wc -l`;

if [ $nb -ne 1 ]
    then
    printf "KO...undesirable files in ex04 | ";
fi

####### IF FILE EXIST #######
cd ex04
flag=`norminette ft_count_if.c`
source="Error"
source2="youwillneverfindme"
if { echo "$flag"  | grep -q "$source" || echo "$flag"  | grep -q "$source2"; } then
    printf "Norme...KO | ";
else
    printf "Norme...OK | ";
fi

cat <<EOF>>gcctest.c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnguyen <vnguyen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/18 17:23:00 by vnguyen           #+#    #+#             */
/*   Updated: 2015/08/19 12:11:42 by vnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ft_count_if(char **tab, int(*f)(char*));

int yolow(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
     	if (str[i] == 'c')
            return (0);
	i++;
    }
    return (1);
}

void    ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while (src[i])
    {
     	dest[i] = src[i];
	i++;
    }
}

int main(void)
{
    char **array;
    int i;

    array = (char**)malloc(sizeof(char*) * 5);
    i = 0;
    while (i < 9)
    {
     	array[i] = (char*)malloc(sizeof(char) * 9);
	ft_strcpy(array[i], "yolow");
	i++;
    }
    ft_strcpy(array[7], "chow");
    array[8] = 0;
    printf("%d", ft_count_if(array, yolow));
    return (0);
}
EOF

if cat ft_count_if.c | grep -q "#include"
    then
    printf "KO...undesirable include in ft_count_if.c | "
fi

gcc -Wall -Wextra -Werror ft_count_if.c gcctest.c -o gcctest &> gccout
flag=`cat gccout`
source="error:"

if echo "$flag" | grep -q "$source"
then
    printf "Does not compile";
else
    b=$(./gcctest)
    if [ "$b" = "7" ]
        then
        printf "Testing...OK"
    else
        printf "Testing...KO";
    fi
    rm gcctest
fi

rm gccout
rm gcctest.c

##### IF FILE DOES NOT EXIST #####
else
    printf "KO... Wrong file name or file does not exist."
fi
####################   END EX 04   ####################


#################### BEGIN EXO 05 ####################
cd ..
printf "\nex05: "

if [ -e ex05/ft_is_sort.c ]
then

nb=`cd ex05 && ls | wc -l`;

if [ $nb -ne 1 ]
    then
    printf "KO...undesirable files in ex05 | ";
fi

####### IF FILE EXIST #######
cd ex05
flag=`norminette ft_is_sort.c`
source="Error"
source2="youwillneverfindme"
if { echo "$flag"  | grep -q "$source" || echo "$flag"  | grep -q "$source2"; } then
    printf "Norme...KO | ";
else
    printf "Norme...OK | ";
fi

cat <<EOF>>gcctest.c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnguyen <vnguyen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/18 17:36:39 by vnguyen           #+#    #+#             */
/*   Updated: 2015/08/18 23:02:27 by vnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int     ft_is_sort(int *tab, int length, int(*f)(int, int));

int sort(int a, int b)
{
    return (a - b);
}

int main(void)
{
    int *tab;
    int i;

    tab = (int*)malloc(sizeof(int) * 10);
    i = 0;
    while (i < 10)
    {
        tab[i] = i;
        i++;
    }
    tab[1] = 0;
    printf("%d ", ft_is_sort(tab, 10, sort));
    tab[9] = 2;
    printf("%d", ft_is_sort(tab, 10, sort));
    return (0);
}
EOF

if cat ft_is_sort.c | grep -q "#include"
    then
    printf "KO...undesirable include in ft_is_sort.c | "
fi

gcc -Wall -Wextra -Werror ft_is_sort.c gcctest.c -o gcctest &> gccout
flag=`cat gccout`
source="error:"

if echo "$flag" | grep -q "$source"
then
    printf "Does not compile";
else
    b=$(./gcctest)
    if [ "$b" = "1 0" ]
        then
        printf "Testing...OK"
    else
        printf "Testing...KO";
    fi
    rm gcctest
fi

rm gccout
rm gcctest.c

##### IF FILE DOES NOT EXIST #####
else
    printf "KO... Wrong file name or file does not exist."
fi
####################   END EX 05   ####################
