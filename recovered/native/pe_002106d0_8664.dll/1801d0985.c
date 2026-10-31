/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801d0985 */

ulonglong FUN_1801d0985(undefined8 *param_1,undefined8 param_2,longlong param_3,uint param_4,
                       int param_5,undefined8 param_6)

{
  undefined8 uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined2 *puVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 auStack_a8 [32];
  char *local_88;
  undefined8 local_80;
  int local_78;
  uint local_74;
  undefined2 *local_70;
  ulonglong local_68;
  uint local_5c;
  undefined8 local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_a8;
  uVar7 = 1;
  if (param_5 + 1U < 2) {
    if ((int)param_4 < 1) {
      uVar7 = 10;
    }
    else {
      uVar1 = *param_1;
      uVar10 = 0;
      uVar11 = 0;
      do {
        uVar7 = FUN_1801ce63e(param_2,*(undefined4 *)(param_3 + uVar11 * 4));
        if ((int)uVar7 != 0) goto LAB_1801d0c08;
        uVar3 = FUN_1801cea0c(param_2,&local_4c);
        uVar7 = (ulonglong)local_4c;
        if (((local_4c != 0) || (uVar7 = 9, 0xffffff < uVar3)) || (0xffffff - uVar3 < uVar10 + 6))
        goto LAB_1801d0c08;
        uVar10 = uVar10 + 6 + uVar3;
        uVar11 = uVar11 + 1;
      } while (param_4 != uVar11);
      puVar8 = (undefined2 *)FUN_1801cc006(uVar1,uVar10 + 2,&local_4c);
      uVar7 = (ulonglong)local_4c;
      if (local_4c == 0) {
        *puVar8 = 0x180;
        *(undefined4 *)(puVar8 + 1) = 0;
        local_5c = 1;
        uVar7 = 6;
        local_68 = 2;
        uVar11 = 0;
        local_78 = 0;
        local_74 = uVar10 + 2;
        local_70 = puVar8;
        local_58 = uVar1;
        do {
          uVar3 = (uint)uVar7;
          iVar4 = FUN_1801ce63e(param_2,*(undefined4 *)(param_3 + uVar11 * 4));
          if (((iVar4 != 0) || (uVar5 = FUN_1801cea0c(param_2,&local_4c), local_4c != 0)) ||
             (((int)uVar5 < 0 || (uVar2 = FUN_1801ce6a2(param_2,&local_4c), local_4c != 0))))
          goto LAB_1801d0c5e;
          local_4c = 10;
          uVar6 = (uint)(uVar2 >> 8);
          if (uVar6 != 0) {
            iVar4 = uVar5 - 2;
            if (uVar5 < 2) {
              iVar4 = 0;
            }
            if (local_5c == uVar6) {
              uVar5 = uVar3;
              local_78 = local_78 + iVar4;
            }
            else {
              lVar9 = (local_68 & 0xffffffff) + 3;
              if (local_74 < (uint)lVar9) goto LAB_1801d0c5e;
              *(char *)((longlong)local_70 + (local_68 & 0xffffffff)) = (char)local_78;
              *(char *)((longlong)local_70 + (longlong)(int)local_68 + 1) =
                   (char)((uint)local_78 >> 8);
              *(char *)((longlong)local_70 + (longlong)(int)local_68 + 2) =
                   (char)((uint)local_78 >> 0x10);
              *(char *)((longlong)local_70 + lVar9) = (char)((uint)local_78 >> 0x18);
              if (uVar6 == 5) break;
              uVar5 = uVar3 + 6;
              if (local_74 < uVar5) goto LAB_1801d0c5e;
              *(undefined1 *)((longlong)local_70 + uVar7) = 0x80;
              lVar9 = (longlong)(int)uVar3;
              *(char *)((longlong)local_70 + lVar9 + 1) = (char)(uVar2 >> 8);
              *(undefined1 *)((longlong)local_70 + uVar7 + 2) = 0;
              local_68 = uVar7 + 2;
              *(undefined2 *)((longlong)local_70 + lVar9 + 3) = 0;
              *(undefined1 *)((longlong)local_70 + lVar9 + 5) = 0;
              local_78 = iVar4;
              local_5c = uVar6;
            }
            if ((uVar10 < uVar5) || (uVar10 < uVar5 + iVar4)) goto LAB_1801d0c5e;
            local_4c = FUN_1801ce682(param_2,(ulonglong)uVar5 + (longlong)local_70,iVar4);
            uVar7 = (ulonglong)(uVar5 + iVar4);
            if (local_4c != 0) goto LAB_1801d0c5e;
          }
          uVar11 = uVar11 + 1;
          uVar3 = (uint)uVar7;
        } while (param_4 != uVar11);
        if (uVar3 <= uVar10) {
          *(undefined1 *)((longlong)local_70 + (ulonglong)uVar3) = 0x80;
          *(undefined1 *)((longlong)local_70 + (longlong)(int)uVar3 + 1) = 3;
          lVar9 = (local_68 & 0xffffffff) + 3;
          if ((uint)lVar9 <= local_74) {
            *(char *)((longlong)local_70 + (local_68 & 0xffffffff)) = (char)local_78;
            *(char *)((longlong)local_70 + (longlong)(int)local_68 + 1) =
                 (char)((uint)local_78 >> 8);
            *(char *)((longlong)local_70 + (longlong)(int)local_68 + 2) =
                 (char)((uint)local_78 >> 0x10);
            *(char *)((longlong)local_70 + lVar9) = (char)((uint)local_78 >> 0x18);
            local_80 = param_6;
            local_88 = "type1";
            uVar7 = FUN_1801d0305(param_1,local_70,uVar3 + 2,0);
            goto LAB_1801d0c08;
          }
        }
LAB_1801d0c5e:
        FUN_1801c9b65(local_58,local_70);
        uVar7 = 1;
      }
    }
  }
LAB_1801d0c08:
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_a8)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_a8);
  }
  return uVar7;
}

