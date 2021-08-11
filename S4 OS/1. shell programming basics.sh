<<comment
Baics of shell programming in Linux

1. single-line comments
    
    #comment here
    
2. multi line comments 
    
    <<samename
        comments here
    samename

3. assign value to variable
    
    Note : every variable is an array in bash
    
    varname=value #avoid spaces
    
    OR
    
    (( varname = value )) #with spaces
    
4. Referance variable value

    echo $variableName
    
    OR
    
    echo ${variableName}
    

5. Delete variable
    
    unset variablename
    
6.  Arrays

    Every variable is an array
    
    var[0]="apple"
    var[1]="ball"
    
    printing : ${var[0]}     o/p - apple
    
    OR
    
    var=("apple" "ball" "cat")
    
    Print all values of an array - 
    
    echo ${var[@]} OR echo ${var[*]} 

comment

