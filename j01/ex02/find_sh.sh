find . -name "*.sh" -print | sed s'/.sh$//g' | awk -F "/" '{print $NF}'
