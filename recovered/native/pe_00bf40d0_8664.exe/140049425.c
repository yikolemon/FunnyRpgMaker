/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140049425 */

ulonglong FUN_140049425(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char *_Str1;
  int iVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  uint *puVar6;
  ulonglong uVar7;
  byte *pbVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  uint local_ac;
  int local_a8 [6];
  uint local_90;
  uint local_8c;
  undefined8 uStack_88;
  int aiStack_80 [14];
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStack_d8;
  lVar10 = *(longlong *)(param_1 + 0x98);
  lVar1 = *(longlong *)(param_1 + 0x2e0);
  uVar5 = FUN_1400491c5(param_1,&local_90);
  local_ac = (uint)uVar5;
  if (local_ac == 0) {
    uVar9 = (ulonglong)local_90;
    uVar7 = uVar9 * 2 + 7 & 0xfffffffffffffff8;
    puVar6 = (uint *)FUN_14001e961(lVar10,local_90 * 0x20 + (int)uVar7 + 0x20,(int *)&local_ac);
    uVar5 = (ulonglong)local_ac;
    if (local_ac == 0) {
      *puVar6 = local_90;
      puVar6[1] = local_8c;
      puVar6[2] = 0;
      FUN_1400b3c00((undefined1 (*) [32])(puVar6 + 8),0,uVar9 * 2);
      *(ulonglong *)(puVar6 + 4) = (longlong)puVar6 + uVar7 + 0x20;
      puVar6[6] = 0;
      puVar6[7] = 0;
      if (local_90 != 0) {
        lVar10 = 0;
        local_b8 = param_2;
        do {
          *(undefined8 *)(*(longlong *)(puVar6 + 4) + lVar10 * 2) =
               *(undefined8 *)((longlong)&uStack_88 + lVar10);
          *(int *)(*(longlong *)(puVar6 + 4) + 8 + lVar10 * 2) =
               *(int *)((longlong)aiStack_80 + lVar10) << 0x10;
          *(int *)(*(longlong *)(puVar6 + 4) + 0x10 + lVar10 * 2) =
               *(int *)((longlong)aiStack_80 + lVar10 + 4) << 0x10;
          *(undefined4 *)(*(longlong *)(puVar6 + 4) + 0x18 + lVar10 * 2) = 0xffffffff;
          *(undefined4 *)(*(longlong *)(puVar6 + 4) + 0x14 + lVar10 * 2) = 0xffffffff;
          lVar2 = *(longlong *)(puVar6 + 4);
          _Str1 = *(char **)(lVar2 + lVar10 * 2);
          if (_Str1 != (char *)0x0) {
            iVar3 = strcmp(_Str1,"Weight");
            if (iVar3 == 0) {
              uVar4 = 0x77676874;
            }
            else {
              iVar3 = strcmp(_Str1,"Width");
              if (iVar3 == 0) {
                uVar4 = 0x77647468;
              }
              else {
                iVar3 = strcmp(_Str1,"OpticalSize");
                if (iVar3 == 0) {
                  uVar4 = 0x6f70737a;
                }
                else {
                  iVar3 = strcmp(_Str1,"Slant");
                  if (iVar3 == 0) {
                    uVar4 = 0x736c6e74;
                  }
                  else {
                    iVar3 = strcmp(_Str1,"Italic");
                    if (iVar3 != 0) goto LAB_1400495d4;
                    uVar4 = 0x6974616c;
                  }
                }
              }
            }
            *(undefined4 *)(lVar2 + 0x14 + lVar10 * 2) = uVar4;
          }
LAB_1400495d4:
          lVar10 = lVar10 + 0x10;
        } while (uVar9 << 4 != lVar10);
        FUN_140049b40(*(longlong *)(lVar1 + 0x110),local_a8,*(int *)(lVar1 + 4));
        param_2 = local_b8;
        pbVar8 = (byte *)(lVar1 + 0xa8);
        lVar10 = 0;
        do {
          iVar3 = FUN_140049c03(pbVar8,*(int *)((longlong)local_a8 + lVar10));
          *(int *)(*(longlong *)(puVar6 + 4) + 0xc + lVar10 * 8) = iVar3;
          lVar10 = lVar10 + 4;
          pbVar8 = pbVar8 + 0x18;
        } while (uVar9 * 4 - lVar10 != 0);
      }
      *param_2 = (longlong)puVar6;
      uVar5 = (ulonglong)local_ac;
    }
  }
  if (DAT_14012ea80 == (local_48 ^ (ulonglong)auStack_d8)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_48 ^ (ulonglong)auStack_d8);
}

