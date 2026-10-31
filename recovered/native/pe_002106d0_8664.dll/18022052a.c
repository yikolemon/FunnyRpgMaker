/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18022052a */

undefined8
FUN_18022052a(undefined8 param_1,longlong param_2,uint param_3,int param_4,undefined8 param_5)

{
  undefined8 uVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  byte *pbVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  int *local_38;
  ulonglong local_30;
  
  local_30 = DAT_180402640 ^ (ulonglong)auStack_58;
  uVar1 = FUN_18021ff22(param_1,param_5,&local_38);
  if ((int)uVar1 == 0) {
    uVar1 = FUN_18021fcb7(local_38,param_4,param_5);
    if ((int)uVar1 == 0) {
      *local_38 = param_4;
      uVar1 = 0;
      if (param_4 != 0) {
        pbVar7 = *(byte **)(local_38 + 2);
        uVar2 = 0x80 >> ((byte)param_3 & 7);
        pbVar3 = (byte *)(param_2 + (ulonglong)(param_3 >> 3));
        iVar4 = 0x80;
        do {
          bVar6 = *pbVar7 | (byte)iVar4;
          if ((uVar2 & *pbVar3) == 0) {
            bVar6 = ~(byte)iVar4 & *pbVar7;
          }
          *pbVar7 = bVar6;
          uVar2 = uVar2 >> 1;
          bVar8 = uVar2 == 0;
          if (bVar8) {
            uVar2 = 0x80;
          }
          pbVar3 = pbVar3 + bVar8;
          iVar5 = iVar4 >> 1;
          iVar4 = iVar5;
          if (iVar5 == 0) {
            iVar4 = 0x80;
          }
          pbVar7 = pbVar7 + (iVar5 == 0);
          param_4 = param_4 + -1;
        } while (param_4 != 0);
      }
    }
  }
  if (DAT_180402640 == (local_30 ^ (ulonglong)auStack_58)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_30 ^ (ulonglong)auStack_58);
}

