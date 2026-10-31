/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140022d88 */

ulonglong FUN_140022d88(longlong *param_1,longlong *param_2,longlong param_3,uint param_4,
                       int param_5,undefined8 param_6)

{
  longlong lVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined2 *puVar10;
  undefined8 uVar11;
  undefined4 extraout_var;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 auStackY_a8 [32];
  uint local_78;
  ulonglong local_68;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_a8;
  uVar9 = 1;
  if (param_5 + 1U < 2) {
    if ((int)param_4 < 1) {
      uVar9 = 10;
    }
    else {
      lVar1 = *param_1;
      uVar13 = 0;
      uVar15 = 0;
      do {
        uVar9 = FUN_140020a41((longlong)param_2,*(uint *)(param_3 + uVar15 * 4));
        if ((int)uVar9 != 0) goto LAB_14002300b;
        uVar6 = FUN_140020e0f(param_2,&local_4c);
        uVar9 = (ulonglong)local_4c;
        if (((local_4c != 0) || (uVar9 = 9, 0xffffff < uVar6)) || (0xffffff - uVar6 < uVar13 + 6))
        goto LAB_14002300b;
        uVar13 = uVar13 + 6 + uVar6;
        uVar15 = uVar15 + 1;
      } while (param_4 != uVar15);
      uVar6 = uVar13 + 2;
      puVar10 = (undefined2 *)FUN_14001e961(lVar1,uVar6,(int *)&local_4c);
      uVar9 = (ulonglong)local_4c;
      if (local_4c == 0) {
        *puVar10 = 0x180;
        *(undefined4 *)(puVar10 + 1) = 0;
        uVar4 = 1;
        uVar9 = 6;
        local_68 = 2;
        uVar15 = 0;
        local_78 = 0;
        do {
          uVar14 = (uint)uVar9;
          uVar11 = FUN_140020a41((longlong)param_2,*(uint *)(param_3 + uVar15 * 4));
          if ((((int)uVar11 != 0) || (uVar7 = FUN_140020e0f(param_2,&local_4c), local_4c != 0)) ||
             (((int)uVar7 < 0 || (uVar5 = FUN_140020aa5(param_2,&local_4c), local_4c != 0))))
          goto LAB_140023061;
          local_4c = 10;
          uVar3 = uVar5 >> 8;
          if (uVar3 != 0) {
            uVar2 = uVar7 - 2;
            if (uVar7 < 2) {
              uVar2 = 0;
            }
            if (uVar4 == uVar3) {
              uVar7 = uVar14;
              local_78 = local_78 + uVar2;
              uVar3 = uVar4;
            }
            else {
              lVar12 = (local_68 & 0xffffffff) + 3;
              if (uVar6 < (uint)lVar12) goto LAB_140023061;
              *(char *)((longlong)puVar10 + (local_68 & 0xffffffff)) = (char)local_78;
              *(char *)((longlong)puVar10 + (longlong)(int)local_68 + 1) = (char)(local_78 >> 8);
              *(char *)((longlong)puVar10 + (longlong)(int)local_68 + 2) = (char)(local_78 >> 0x10);
              *(char *)((longlong)puVar10 + lVar12) = (char)(local_78 >> 0x18);
              if (uVar3 == 5) break;
              uVar7 = uVar14 + 6;
              if (uVar6 < uVar7) goto LAB_140023061;
              *(undefined1 *)((longlong)puVar10 + uVar9) = 0x80;
              lVar12 = (longlong)(int)uVar14;
              *(char *)((longlong)puVar10 + lVar12 + 1) = (char)(uVar5 >> 8);
              *(undefined1 *)((longlong)puVar10 + uVar9 + 2) = 0;
              local_68 = uVar9 + 2;
              *(undefined2 *)((longlong)puVar10 + lVar12 + 3) = 0;
              *(undefined1 *)((longlong)puVar10 + lVar12 + 5) = 0;
              local_78 = uVar2;
            }
            if ((uVar13 < uVar7) || (uVar13 < uVar7 + uVar2)) goto LAB_140023061;
            local_4c = FUN_140020a85(param_2,(undefined8 *)((ulonglong)uVar7 + (longlong)puVar10),
                                     uVar2);
            uVar9 = (ulonglong)(uVar7 + uVar2);
            uVar4 = uVar3;
            if (local_4c != 0) goto LAB_140023061;
          }
          uVar15 = uVar15 + 1;
          uVar14 = (uint)uVar9;
        } while (param_4 != uVar15);
        if (uVar14 <= uVar13) {
          *(undefined1 *)((longlong)puVar10 + (ulonglong)uVar14) = 0x80;
          *(undefined1 *)((longlong)puVar10 + (longlong)(int)uVar14 + 1) = 3;
          lVar12 = (local_68 & 0xffffffff) + 3;
          if ((uint)lVar12 <= uVar6) {
            *(char *)((longlong)puVar10 + (local_68 & 0xffffffff)) = (char)local_78;
            *(char *)((longlong)puVar10 + (longlong)(int)local_68 + 1) = (char)(local_78 >> 8);
            *(char *)((longlong)puVar10 + (longlong)(int)local_68 + 2) = (char)(local_78 >> 0x10);
            *(char *)((longlong)puVar10 + lVar12) = (char)(local_78 >> 0x18);
            iVar8 = FUN_140022708(param_1,(longlong)puVar10,uVar14 + 2,0,"type1",param_6);
            uVar9 = CONCAT44(extraout_var,iVar8);
            goto LAB_14002300b;
          }
        }
LAB_140023061:
        FUN_14001c53d(lVar1,(longlong)puVar10);
        uVar9 = 1;
      }
    }
  }
LAB_14002300b:
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStackY_a8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStackY_a8);
  }
  return uVar9;
}

