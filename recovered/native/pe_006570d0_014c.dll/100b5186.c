/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b5186 */

uint __fastcall FUN_100b5186(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)param_1[7] != 0) {
    iVar1 = *(int *)param_1[0xb];
    if (1 < iVar1) {
      *(int *)param_1[0xb] = iVar1 + -1;
      iVar1 = *(int *)param_1[7];
      *(int *)param_1[7] = iVar1 + 1;
      return (uint)*(byte *)(iVar1 + 1);
    }
  }
  iVar1 = FUN_10082d16();
  if (iVar1 == -1) {
    uVar2 = 0xffffffff;
  }
  else {
    if ((*(byte **)param_1[7] == (byte *)0x0) || (*(int *)param_1[0xb] < 1)) {
                    /* WARNING: Could not recover jumptable at 0x100b51d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*param_1 + 0x18))();
      return uVar2;
    }
    uVar2 = (uint)**(byte **)param_1[7];
  }
  return uVar2;
}

