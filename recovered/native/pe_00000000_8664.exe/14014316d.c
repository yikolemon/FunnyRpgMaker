/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14014316d */

void FUN_14014316d(longlong param_1)

{
  undefined4 *puVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  ushort *puVar5;
  short sVar6;
  undefined2 uVar7;
  ushort uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  undefined2 *puVar15;
  undefined4 *puVar16;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  int *local_60;
  undefined1 local_50 [4];
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_88;
  lVar3 = *(longlong *)(param_1 + 0xa0);
  uVar13 = *(undefined8 *)(lVar3 + 0x30);
  lVar4 = *(longlong *)(param_1 + 0x408);
  local_4c = (**(code **)(param_1 + 0x2a0))(param_1,0x4d564152,lVar3,local_50);
  if (local_4c == 0) {
    iVar9 = FUN_14012db43(lVar3);
    sVar6 = FUN_14012d676(lVar3,&local_4c);
    if (((local_4c == 0) && (local_4c = FUN_14012d664(lVar3,2), local_4c == 0)) && (sVar6 == 1)) {
      uVar12 = FUN_140128a1f(uVar13,0x30,&local_4c);
      *(undefined8 *)(lVar4 + 0x60) = uVar12;
      if ((local_4c == 0) && (local_4c = FUN_14012d664(lVar3,4), local_4c == 0)) {
        uVar7 = FUN_14012d676(lVar3,&local_4c);
        **(undefined2 **)(lVar4 + 0x60) = uVar7;
        if (local_4c == 0) {
          uVar10 = FUN_14012d676(lVar3,&local_4c);
          if (local_4c == 0) {
            uVar11 = FUN_14012db43(lVar3);
            local_4c = FUN_140140d27(param_1,iVar9 + (uVar10 & 0xffff),
                                     *(longlong *)(lVar4 + 0x60) + 8);
            if (local_4c == 0) {
              local_68 = 0;
              local_60 = &local_4c;
              uVar13 = FUN_140128c13(uVar13,0xc,0,**(undefined2 **)(lVar4 + 0x60));
              *(undefined8 *)(*(longlong *)(lVar4 + 0x60) + 0x28) = uVar13;
              if (((local_4c == 0) && (local_4c = FUN_14012d612(lVar3,uVar11), local_4c == 0)) &&
                 (local_4c = FUN_14012dc34(lVar3,(ulonglong)**(ushort **)(lVar4 + 0x60) << 3),
                 local_4c == 0)) {
                puVar5 = *(ushort **)(lVar4 + 0x60);
                puVar16 = *(undefined4 **)(puVar5 + 0x14);
                if ((puVar16 != (undefined4 *)0x0) && ((ulonglong)*puVar5 != 0)) {
                  puVar1 = puVar16 + (ulonglong)*puVar5 * 3;
                  do {
                    uVar11 = FUN_14012dddf(lVar3);
                    *puVar16 = uVar11;
                    uVar7 = FUN_14012dd9f(lVar3);
                    *(undefined2 *)(puVar16 + 1) = uVar7;
                    uVar8 = FUN_14012dd9f(lVar3);
                    *(ushort *)((longlong)puVar16 + 6) = uVar8;
                    uVar2 = *(ushort *)(puVar16 + 1);
                    if (((uVar2 & uVar8) != 0xffff) &&
                       ((*(uint *)(puVar5 + 4) < (uint)uVar2 || *(uint *)(puVar5 + 4) == (uint)uVar2
                        || (*(uint *)(*(longlong *)(puVar5 + 8) + (ulonglong)uVar2 * 0x20) <=
                            (uint)uVar8)))) {
                      local_4c = 8;
                      break;
                    }
                    puVar16 = puVar16 + 3;
                  } while (puVar16 < puVar1);
                }
                FUN_14012dd58(lVar3);
                if (local_4c == 0) {
                  puVar16 = *(undefined4 **)(*(ushort **)(lVar4 + 0x60) + 0x14);
                  if ((puVar16 != (undefined4 *)0x0) &&
                     (uVar14 = (ulonglong)**(ushort **)(lVar4 + 0x60), uVar14 != 0)) {
                    puVar1 = puVar16 + uVar14 * 3;
                    do {
                      puVar15 = (undefined2 *)FUN_140143414(param_1,*puVar16);
                      if (puVar15 != (undefined2 *)0x0) {
                        *(undefined2 *)(puVar16 + 2) = *puVar15;
                      }
                      puVar16 = puVar16 + 3;
                    } while (puVar16 < puVar1);
                  }
                  *(byte *)(param_1 + 0x411) = *(byte *)(param_1 + 0x411) | 1;
                }
              }
            }
          }
        }
      }
    }
  }
  if (DAT_140f17b40 != (local_48 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_48 ^ (ulonglong)auStack_88);
  }
  return;
}

