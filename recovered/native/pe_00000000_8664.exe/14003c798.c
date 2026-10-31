/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14003c798 */

longlong FUN_14003c798(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  ulonglong *puVar2;
  undefined8 local_res20;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  local_res20 = param_4;
  FUN_14003d164(param_1,param_2,3000);
  if (param_3 != 0) {
    lVar1 = param_1 + 0x1005;
    puVar3 = &local_res20;
    puVar2 = (ulonglong *)FUN_140011866();
    FUN_1401934d4(*puVar2 | 2,lVar1,0x1000,param_3,0,&local_res20,puVar3,param_1,uVar4);
  }
  return param_1;
}

