/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140150598 */

int FUN_140150598(longlong param_1,ushort *param_2)

{
  byte bVar1;
  longlong lVar2;
  ushort uVar3;
  ushort *puVar4;
  longlong lVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  lVar2 = *(longlong *)(param_1 + 0x3e0);
  local_2c = 0;
  if (lVar2 == 0) {
    local_2c = 0;
  }
  else {
    puVar4 = *(ushort **)(lVar2 + 0x1130);
    if (puVar4 == (ushort *)0x0) {
      puVar4 = (ushort *)FUN_14012afda(*(undefined8 *)(param_1 + 0x98),2,&local_2c);
      if (local_2c != 0) goto LAB_140150604;
      *puVar4 = 0;
      lVar5 = FUN_1401502ed(lVar2,*(undefined4 *)(lVar2 + 0x65c));
      if ((lVar5 != 0) && (lVar5 = FUN_1401908c0(lVar5,"/FSType"), lVar5 != 0)) {
        pbVar7 = (byte *)(lVar5 + 7);
        pbVar6 = (byte *)FUN_1401908c0(pbVar7,"def");
        if (pbVar6 != (byte *)0x0) {
          for (; pbVar7 != pbVar6; pbVar7 = pbVar7 + 1) {
            bVar1 = *pbVar7;
            if ((byte)(bVar1 - 0x30) < 10) {
              if (0x1997 < *puVar4) {
LAB_1401506c7:
                *puVar4 = 0;
                break;
              }
              uVar3 = *puVar4 * 10;
              *puVar4 = uVar3;
              *puVar4 = (uVar3 + (short)(char)*pbVar7) - 0x30;
            }
            else if ((0x20 < bVar1) || ((0x100002400U >> ((ulonglong)(uint)bVar1 & 0x3f) & 1) == 0))
            goto LAB_1401506c7;
          }
        }
      }
      *(ushort **)(lVar2 + 0x1130) = puVar4;
    }
    *param_2 = *puVar4;
  }
LAB_140150604:
  if (DAT_140f17b40 != (local_28 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_28 ^ (ulonglong)auStack_58);
  }
  return local_2c;
}

