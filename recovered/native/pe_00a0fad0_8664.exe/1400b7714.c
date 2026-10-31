/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400b7714 */

undefined4
FUN_1400b7714(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
             undefined1 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8,
             undefined1 param_9,undefined2 param_10)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 unaff_RBX;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  iVar1 = FUN_1400b5ab6(param_2,0);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    FUN_1400b5ab6(param_2,&local_58);
    uVar2 = FUN_1400b7812(param_1,&local_58,iVar1,
                          CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_3) & 0xffffffff,param_4,
                          param_5,param_6,param_7,param_8,param_9,param_10);
  }
  FUN_140041304(&local_58);
  return uVar2;
}

