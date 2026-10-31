/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b4128 */

void __thiscall FUN_100b4128(int *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *local_2c;
  int *local_28;
  int *local_24;
  int local_20;
  int local_1c [2];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_2c;
  if (param_2[4] != 0) {
    piVar4 = param_2;
    if (3 < (uint)param_2[5]) {
      piVar4 = (int *)*param_2;
    }
    local_2c = piVar4 + param_2[4];
    iVar7 = 0;
    local_28 = param_1;
    do {
      local_20 = *piVar4;
      iVar1 = *param_1;
      iVar7 = iVar7 * 0x30;
      local_24 = piVar4;
      uVar2 = FUN_100616f3(&local_20);
      param_1 = local_28;
      uVar2 = uVar2 & *(uint *)(iVar1 + 0x18 + iVar7);
      iVar3 = *(int *)(iVar1 + 4 + iVar7);
      iVar1 = *(int *)(iVar1 + 0xc + iVar7);
      iVar5 = *(int *)(iVar1 + 4 + uVar2 * 8);
      iVar6 = 0;
      if ((iVar5 != iVar3) && (iVar6 = iVar5, local_20 != *(int *)(iVar5 + 8))) {
        do {
          if (iVar5 == *(int *)(iVar1 + uVar2 * 8)) {
            iVar6 = 0;
            break;
          }
          iVar5 = *(int *)(iVar5 + 4);
          iVar6 = iVar5;
        } while (local_20 != *(int *)(iVar5 + 8));
      }
      if (iVar6 != 0) {
        iVar3 = iVar6;
      }
      if (iVar3 == *(int *)(*local_28 + 4 + iVar7)) {
        iVar7 = (local_28[1] - *local_28 >> 4) * -0x55555555;
        FUN_10060b96();
        FUN_100b5ff6(local_1c,&local_20);
        *(int *)(local_1c[0] + 0xc) = iVar7;
      }
      else {
        iVar7 = *(int *)(iVar3 + 0xc);
      }
      piVar4 = local_24 + 1;
    } while (piVar4 != local_2c);
    local_1c[0] = param_2[4];
    FUN_100b620e(local_1c,param_3);
    iVar1 = *param_1;
    iVar7 = iVar7 * 0x30;
    local_1c[0] = (param_1[4] - param_1[3] >> 2) * -0x49249249 + -1;
    piVar4 = *(int **)(iVar1 + 0x28 + iVar7);
    if (piVar4 == *(int **)(iVar1 + 0x2c + iVar7)) {
      FUN_10051662(piVar4,local_1c);
    }
    else {
      *piVar4 = local_1c[0];
      piVar4 = (int *)(iVar1 + iVar7 + 0x28);
      *piVar4 = *piVar4 + 4;
    }
  }
  if (DAT_10388d00 != (local_14 ^ (uint)&local_2c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

