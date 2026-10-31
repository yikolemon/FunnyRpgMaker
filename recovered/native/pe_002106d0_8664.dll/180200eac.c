/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180200eac */

int FUN_180200eac(longlong param_1,ushort *param_2)

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
  
  local_28 = DAT_180402640 ^ (ulonglong)auStack_58;
  lVar2 = *(longlong *)(param_1 + 0x3e0);
  local_2c = 0;
  if (lVar2 == 0) {
    local_2c = 0;
  }
  else {
    puVar4 = *(ushort **)(lVar2 + 0x1130);
    if (puVar4 == (ushort *)0x0) {
      puVar4 = (ushort *)FUN_1801cc006(*(undefined8 *)(param_1 + 0x98),2,&local_2c);
      if (local_2c != 0) goto LAB_180200f18;
      *puVar4 = 0;
      lVar5 = FUN_180200c01(lVar2,*(undefined4 *)(lVar2 + 0x65c));
      if ((lVar5 != 0) && (lVar5 = FUN_18026ee50(lVar5,"/FSType"), lVar5 != 0)) {
        pbVar7 = (byte *)(lVar5 + 7);
        pbVar6 = (byte *)FUN_18026ee50(pbVar7,"def");
        if (pbVar6 != (byte *)0x0) {
          for (; pbVar7 != pbVar6; pbVar7 = pbVar7 + 1) {
            bVar1 = *pbVar7;
            if ((byte)(bVar1 - 0x30) < 10) {
              if (0x1997 < *puVar4) {
LAB_180200fdb:
                *puVar4 = 0;
                break;
              }
              uVar3 = *puVar4 * 10;
              *puVar4 = uVar3;
              *puVar4 = (uVar3 + (short)(char)*pbVar7) - 0x30;
            }
            else if ((0x20 < bVar1) || ((0x100002400U >> ((ulonglong)(uint)bVar1 & 0x3f) & 1) == 0))
            goto LAB_180200fdb;
          }
        }
      }
      *(ushort **)(lVar2 + 0x1130) = puVar4;
    }
    *param_2 = *puVar4;
  }
LAB_180200f18:
  if (DAT_180402640 != (local_28 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_28 ^ (ulonglong)auStack_58);
  }
  return local_2c;
}

