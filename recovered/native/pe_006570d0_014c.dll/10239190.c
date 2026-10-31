/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10239190 */

undefined2 __thiscall FUN_10239190(int param_1,undefined1 param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined8 local_14;
  undefined2 local_c [2];
  undefined1 local_8 [4];
  
  local_8[0] = param_2;
  local_14 = 0;
  iVar2 = FUN_1022d8f0(local_c,local_8,1,&local_14,param_1 + 0x18);
  uVar1 = 0xffff;
  if (-1 < iVar2) {
    uVar1 = local_c[0];
  }
  return uVar1;
}

