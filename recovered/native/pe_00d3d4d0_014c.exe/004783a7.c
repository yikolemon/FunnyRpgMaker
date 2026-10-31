/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004783a7 */

void __fastcall FUN_004783a7(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_18;
  piVar3 = (int *)*param_1;
  if ((piVar3 != (int *)0x0) && (iVar1 = *piVar3, iVar1 != 0)) {
    iVar4 = piVar3[1];
    if (iVar4 != 0) {
      do {
        iVar2 = *(int *)(iVar4 + 0xc);
        local_18 = iVar4;
        FUN_004790b4(iVar1,&local_18);
        iVar4 = iVar2;
      } while (iVar2 != 0);
      piVar3 = (int *)*param_1;
    }
    FUN_0041c607(iVar1,(int)piVar3);
    *param_1 = 0;
  }
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_18)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_18);
  }
  return;
}

