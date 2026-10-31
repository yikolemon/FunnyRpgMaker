/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10269027 */

/* Library Function - Single Match
    ___acrt_errno_map_os_error
   
   Library: Visual Studio 2019 Release */

void ___acrt_errno_map_os_error(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_10269012();
  *puVar1 = param_1;
  uVar2 = FUN_1026904a(param_1);
  puVar1 = (undefined4 *)FUN_10268ffd();
  *puVar1 = uVar2;
  return;
}

