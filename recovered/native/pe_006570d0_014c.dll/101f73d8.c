/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101f73d8 */

int __fastcall FUN_101f73d8(int *param_1,undefined4 *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int local_30;
  int *local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined4 *local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_30;
  local_18 = 0;
  uVar6 = *(undefined4 *)(*param_1 + 0x1c);
  *param_2 = 0;
  if ((param_1[7] != 0) || (iVar7 = FUN_101f84b3(), local_18 = iVar7, iVar7 == 0)) {
    iVar3 = param_1[3];
    iVar7 = 0;
    if (iVar3 != 0) {
      iVar7 = param_1[6] + iVar3;
      local_1c = param_2;
      piVar1 = (int *)FUN_101c2a50(uVar6,4,0,iVar3 + 1,0,&local_18);
      if (local_18 == 0) {
        iVar3 = 0;
        local_30 = iVar7;
        if ((param_3 == (int *)0x0) || (iVar3 = FUN_101bff17(uVar6,iVar7,&local_18), local_18 == 0))
        {
          local_24 = param_1[8];
          iVar7 = iVar3;
          if (param_3 == (int *)0x0) {
            iVar7 = local_24;
          }
          *piVar1 = iVar7;
          local_28 = iVar3;
          local_20 = uVar6;
          if (param_1[3] != 0) {
            uVar8 = 1;
            iVar7 = 0;
            uVar4 = 0;
            local_2c = param_1;
            do {
              uVar2 = *(int *)(param_1[7] + uVar8 * 4) - 1;
              uVar5 = uVar4;
              if ((uVar4 <= uVar2) && (uVar5 = param_1[6], uVar2 < (uint)param_1[6])) {
                uVar5 = uVar2;
              }
              if (param_3 == (int *)0x0) {
                piVar1[uVar8] = local_24 + uVar5;
              }
              else {
                iVar3 = local_28 + uVar5 + iVar7;
                piVar1[uVar8] = iVar3;
                param_1 = local_2c;
                if (uVar5 != uVar4) {
                  FUN_1025b2d0(piVar1[uVar8 - 1],uVar4 + local_24,iVar3 - piVar1[uVar8 - 1]);
                  *(undefined1 *)piVar1[uVar8] = 0;
                  piVar1[uVar8] = piVar1[uVar8] + 1;
                  iVar7 = iVar7 + 1;
                  param_1 = local_2c;
                }
              }
              uVar8 = uVar8 + 1;
              uVar4 = uVar5;
            } while (uVar8 <= (uint)param_1[3]);
          }
          *local_1c = piVar1;
          if (param_3 != (int *)0x0) {
            *param_3 = local_28;
          }
          iVar3 = local_28;
          uVar6 = local_20;
          if (param_4 != (int *)0x0) {
            *param_4 = local_30;
          }
        }
        if ((local_18 != 0) && (iVar3 != 0)) {
          FUN_101c0017(uVar6,iVar3);
        }
      }
      iVar7 = local_18;
      if (piVar1 != (int *)0x0 && local_18 != 0) {
        FUN_101c0017(uVar6,piVar1);
        iVar7 = local_18;
      }
    }
  }
  if (DAT_10388d00 != (local_14 ^ (uint)&local_30)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return iVar7;
}

