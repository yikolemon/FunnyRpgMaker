/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401758bd */

undefined8 FUN_1401758bd(longlong param_1,int *param_2,uint *param_3)

{
  longlong lVar1;
  ushort uVar2;
  undefined8 uVar3;
  byte *pbVar4;
  uint uVar5;
  undefined1 auStack_58 [32];
  int *local_38;
  int local_30;
  ushort local_2c;
  ulonglong local_28;
  
  local_28 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x4e0);
  if ((lVar1 != 0) && (param_3 != (uint *)0x0 && *(longlong *)(lVar1 + 0x80) != 0)) {
    if ((param_3[1] < *param_3) &&
       ((pbVar4 = *(byte **)(param_3 + 2), *(byte **)(lVar1 + 0x40) <= pbVar4 &&
        (uVar5 = (uint)((char)param_3[4] != '\0') * 4 + 6,
        pbVar4 + (*param_3 + ~param_3[1]) * uVar5 <=
        (byte *)((*(longlong *)(lVar1 + 0x80) + (ulonglong)*(uint *)(lVar1 + 0x88)) -
                (ulonglong)uVar5))))) {
      *param_2 = ((int)(short)((ushort)*pbVar4 << 8) | (uint)pbVar4[1]) << 2;
      *(ushort *)(param_2 + 1) = *(ushort *)(pbVar4 + 2) << 8 | *(ushort *)(pbVar4 + 2) >> 8;
      uVar2 = *(ushort *)(pbVar4 + 4) << 8 | *(ushort *)(pbVar4 + 4) >> 8;
      *(ushort *)((longlong)param_2 + 6) = uVar2;
      if ((char)param_3[4] == '\0') {
        pbVar4 = pbVar4 + 6;
      }
      else {
        uVar5 = *(uint *)(pbVar4 + 6);
        pbVar4 = pbVar4 + 10;
        local_38 = &local_30;
        FUN_140178b5b(param_1,lVar1,
                      uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                      uVar5 << 0x18,2);
        *param_2 = *param_2 + local_30 * 4;
        *(short *)((longlong)param_2 + 6) = *(short *)((longlong)param_2 + 6) + local_2c;
        uVar2 = local_2c;
      }
      *(byte **)(param_3 + 2) = pbVar4;
      param_3[1] = param_3[1] + 1;
      uVar3 = CONCAT71((uint7)(byte)(uVar2 >> 8),1);
      goto LAB_14017594b;
    }
  }
  uVar3 = 0;
LAB_14017594b:
  if (DAT_140f17b40 == (local_28 ^ (ulonglong)auStack_58)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_28 ^ (ulonglong)auStack_58);
}

