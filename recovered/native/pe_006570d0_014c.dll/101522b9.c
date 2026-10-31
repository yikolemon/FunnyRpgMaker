/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101522b9 */

int __fastcall FUN_101522b9(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_1015230b();
  iVar2 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_2;
    puVar1[1] = param_3;
    puVar1[2] = param_4;
    if (param_3 == 0) {
      puVar1[3] = 0xffffffff;
    }
    else {
      iVar2 = *(int *)(param_1 + 0xa1c);
      puVar1[3] = iVar2;
      *(int *)(param_1 + 0xa1c) = param_3 + iVar2;
      iVar2 = puVar1[3] + param_1 + 0x630;
    }
  }
  return iVar2;
}

