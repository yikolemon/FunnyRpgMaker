/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006db6a */

int FUN_14006db6a(uint *param_1,longlong param_2,uint param_3,int param_4,longlong param_5)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  byte bVar5;
  byte *pbVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  int *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14012ea80 ^ (ulonglong)auStack_58;
  iVar1 = FUN_14006d562(param_1,param_5,(longlong *)&local_38);
  if (iVar1 == 0) {
    iVar1 = FUN_14006d2f7((longlong)local_38,param_4,param_5);
    if (iVar1 == 0) {
      *local_38 = param_4;
      iVar1 = 0;
      if (param_4 != 0) {
        pbVar6 = *(byte **)(local_38 + 2);
        uVar2 = 0x80 >> ((byte)param_3 & 7);
        pbVar3 = (byte *)(param_2 + (ulonglong)(param_3 >> 3));
        iVar4 = 0x80;
        do {
          bVar5 = *pbVar6 | (byte)iVar4;
          if ((uVar2 & *pbVar3) == 0) {
            bVar5 = ~(byte)iVar4 & *pbVar6;
          }
          *pbVar6 = bVar5;
          uVar2 = uVar2 >> 1;
          bVar7 = uVar2 == 0;
          if (bVar7) {
            uVar2 = 0x80;
          }
          pbVar3 = pbVar3 + bVar7;
          iVar1 = iVar4 >> 1;
          iVar4 = iVar1;
          if (iVar1 == 0) {
            iVar4 = 0x80;
          }
          pbVar6 = pbVar6 + (iVar1 == 0);
          param_4 = param_4 + -1;
          iVar1 = 0;
        } while (param_4 != 0);
      }
    }
  }
  if (DAT_14012ea80 == (local_30 ^ (ulonglong)auStack_58)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_30 ^ (ulonglong)auStack_58);
}

