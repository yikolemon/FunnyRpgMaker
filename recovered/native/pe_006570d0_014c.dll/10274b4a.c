/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10274b4a */

/* Library Function - Single Match
    ___acrt_EnumSystemLocalesEx@16
   
   Library: Visual Studio 2019 Release */

void ___acrt_EnumSystemLocalesEx_16
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined4 local_14;
  undefined4 *local_10;
  undefined4 local_c [2];
  
  pcVar1 = (code *)FUN_10275120();
  if (pcVar1 == (code *)0x0) {
    local_10 = &param_1;
    local_c[0] = 4;
    local_14 = 4;
    FUN_102752c5(&local_14,&local_10,local_c);
  }
  else {
    (*(code *)PTR_guard_check_icall_1035d810)(param_1,param_2,param_3,param_4);
    (*pcVar1)();
  }
  return;
}

