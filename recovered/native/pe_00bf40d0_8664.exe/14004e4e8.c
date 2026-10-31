/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14004e4e8 */

int FUN_14004e4e8(longlong param_1,ushort *param_2)

{
  byte bVar1;
  longlong lVar2;
  ushort uVar3;
  ushort *puVar4;
  undefined1 (*pauVar5) [16];
  undefined1 (*pauVar6) [16];
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14012ea80 ^ (ulonglong)auStack_58;
  lVar2 = *(longlong *)(param_1 + 0x3e0);
  local_2c = 0;
  if (lVar2 != 0) {
    puVar4 = *(ushort **)(lVar2 + 0x1130);
    if (puVar4 == (ushort *)0x0) {
      puVar4 = (ushort *)FUN_14001e961(*(longlong *)(param_1 + 0x98),2,&local_2c);
      if (local_2c != 0) goto LAB_14004e554;
      *puVar4 = 0;
      pauVar5 = (undefined1 (*) [16])FUN_14004e23d(lVar2,*(uint *)(lVar2 + 0x65c));
      if ((pauVar5 != (undefined1 (*) [16])0x0) &&
         (pauVar5 = FUN_14008de20(pauVar5,(undefined1 (*) [16])"/FSType"),
         pauVar5 != (undefined1 (*) [16])0x0)) {
        pauVar5 = (undefined1 (*) [16])(*pauVar5 + 7);
        pauVar6 = FUN_14008de20(pauVar5,(undefined1 (*) [16])0x14011b015);
        if (pauVar6 != (undefined1 (*) [16])0x0) {
          for (; pauVar5 != pauVar6; pauVar5 = (undefined1 (*) [16])(*pauVar5 + 1)) {
            bVar1 = (*pauVar5)[0];
            if ((byte)(bVar1 - 0x30) < 10) {
              if (0x1997 < *puVar4) {
LAB_14004e617:
                *puVar4 = 0;
                break;
              }
              uVar3 = *puVar4 * 10;
              *puVar4 = uVar3;
              *puVar4 = (uVar3 + (short)(char)(*pauVar5)[0]) - 0x30;
            }
            else if ((0x20 < bVar1) || ((0x100002400U >> ((ulonglong)(uint)bVar1 & 0x3f) & 1) == 0))
            goto LAB_14004e617;
          }
        }
      }
      *(ushort **)(lVar2 + 0x1130) = puVar4;
    }
    *param_2 = *puVar4;
  }
LAB_14004e554:
  if (DAT_14012ea80 != (local_28 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_28 ^ (ulonglong)auStack_58);
  }
  return local_2c;
}

