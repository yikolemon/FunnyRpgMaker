/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c31c5 */

int __fastcall FUN_101c31c5(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 *local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_24;
  puVar1 = (undefined4 *)param_1[1];
  uVar2 = *puVar1;
  iVar5 = FUN_101c21f6(uVar2,0xc,&local_18);
  if (local_18 == 0) {
    iVar3 = *param_1;
    param_1[3] = iVar3;
    iVar6 = *(int *)(iVar3 + 0x24);
    param_1[4] = iVar6;
    local_24 = puVar1;
    local_1c = uVar2;
    if ((*(int *)(iVar3 + 0x38) != 0) &&
       (pcVar4 = *(code **)(*(int *)(iVar3 + 0x38) + 4), pcVar4 != (code *)0x0)) {
      local_20 = iVar5;
      local_18 = (*pcVar4)(uVar2,param_1 + 0xd);
      if (local_18 != 0) {
        FUN_101c0017(uVar2,local_20);
        goto LAB_101c328b;
      }
      param_1[0xe] = *(int *)(*(int *)(iVar3 + 0x38) + 0x10);
      param_1[0xf] = *(int *)(iVar3 + 0x28);
      iVar6 = *(int *)(iVar3 + 0x24);
      iVar5 = local_20;
    }
    if (iVar6 == 0x53564720) {
      param_1[0xf] = *(int *)(iVar3 + 0x28);
    }
    *(int **)(iVar5 + 8) = param_1;
    FUN_101c2229(local_24 + 0x25,iVar5);
    FUN_101c69d4();
    local_18 = 0;
  }
LAB_101c328b:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_24)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return local_18;
}

