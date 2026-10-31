/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140140ad0 */

ulonglong FUN_140140ad0(longlong param_1,undefined8 param_2,uint *param_3,uint *param_4,uint param_5
                       )

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  ushort uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  uint *local_60;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(param_1 + 0xa0);
  uVar7 = *(undefined8 *)(lVar1 + 0x30);
  uVar5 = FUN_14012d612(lVar1);
  local_4c = (uint)uVar5;
  if (local_4c != 0) goto LAB_140140bc5;
  cVar2 = FUN_14012de17(lVar1,&local_4c);
  uVar5 = (ulonglong)local_4c;
  if (local_4c != 0) goto LAB_140140bc5;
  bVar3 = FUN_14012de17(lVar1,&local_4c);
  uVar5 = (ulonglong)local_4c;
  if (local_4c != 0) goto LAB_140140bc5;
  if (cVar2 == '\x01') {
    uVar10 = FUN_14012d9e0(lVar1,&local_4c);
    *param_3 = uVar10;
LAB_140140b88:
    uVar5 = (ulonglong)local_4c;
    if (local_4c != 0) goto LAB_140140bc5;
    if (bVar3 < 0x40) {
      iVar12 = (bVar3 >> 4) + 1;
      if (uVar10 * iVar12 <= param_5) {
        local_68 = 0;
        local_60 = &local_4c;
        local_50 = 2 << (bVar3 & 0xf);
        uVar6 = FUN_140128c13(uVar7,4,0);
        *(undefined8 *)(param_3 + 4) = uVar6;
        uVar5 = (ulonglong)local_4c;
        if (local_4c != 0) goto LAB_140140bc5;
        local_68 = 0;
        local_60 = &local_4c;
        uVar7 = FUN_140128c13(uVar7,4,0);
        *(undefined8 *)(param_3 + 2) = uVar7;
        uVar5 = (ulonglong)local_4c;
        if (local_4c != 0) goto LAB_140140bc5;
        local_4c = FUN_14012dc34(lVar1,iVar12 * *param_3);
        if (local_4c == 0) {
          if (*param_3 != 0) {
            local_50 = local_50 - 1;
            lVar8 = *(longlong *)(lVar1 + 0x38);
            uVar5 = 0;
            do {
              lVar9 = 0;
              uVar10 = 0;
              do {
                uVar10 = uVar10 << 8 | (uint)*(byte *)(lVar8 + lVar9);
                lVar9 = lVar9 + 1;
              } while ((bVar3 >> 4) + 1 != (int)lVar9);
              if (uVar10 == 0xffffffff) {
                *(undefined4 *)(*(longlong *)(param_3 + 2) + uVar5 * 4) = 0xffff;
                uVar10 = 0xffff;
              }
              else {
                uVar11 = uVar10 >> (bVar3 & 0xf) + 1;
                if (*param_4 <= uVar11) goto LAB_140140bc0;
                *(uint *)(*(longlong *)(param_3 + 2) + uVar5 * 4) = uVar11;
                uVar10 = uVar10 & local_50;
                if (*(uint *)(*(longlong *)(param_4 + 2) + (ulonglong)uVar11 * 0x20) <= uVar10)
                goto LAB_140140bc0;
              }
              lVar8 = lVar8 + (ulonglong)(bVar3 >> 4) + 1;
              *(uint *)(*(longlong *)(param_3 + 4) + uVar5 * 4) = uVar10;
              uVar5 = uVar5 + 1;
            } while (uVar5 < *param_3);
          }
          FUN_14012dd58(lVar1);
          uVar5 = (ulonglong)local_4c;
          goto LAB_140140bc5;
        }
      }
    }
  }
  else if (cVar2 == '\0') {
    uVar4 = FUN_14012d676(lVar1,&local_4c);
    uVar10 = (uint)uVar4;
    *param_3 = (uint)uVar4;
    goto LAB_140140b88;
  }
LAB_140140bc0:
  uVar5 = 8;
LAB_140140bc5:
  if (DAT_140f17b40 != (local_48 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_48 ^ (ulonglong)auStack_88);
  }
  return uVar5;
}

