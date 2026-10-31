/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102108bb */

int __fastcall
FUN_102108bb(undefined4 param_1,int param_2,uint param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  byte bVar4;
  byte *pbVar5;
  bool bVar6;
  int local_1c;
  int *local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_1c;
  iVar1 = FUN_102103eb(&local_18);
  if (iVar1 == 0) {
    iVar1 = FUN_102101f2(param_5);
    if (iVar1 == 0) {
      *local_18 = param_4;
      iVar1 = 0;
      if (param_4 != 0) {
        local_1c = param_4;
        pbVar5 = (byte *)local_18[2];
        uVar3 = 0x80 >> ((byte)param_3 & 7);
        pbVar2 = (byte *)(param_2 + (param_3 >> 3));
        iVar1 = 0x80;
        do {
          bVar4 = *pbVar5 | (byte)iVar1;
          if ((uVar3 & *pbVar2) == 0) {
            bVar4 = ~(byte)iVar1 & *pbVar5;
          }
          *pbVar5 = bVar4;
          uVar3 = uVar3 >> 1;
          bVar6 = uVar3 == 0;
          if (bVar6) {
            uVar3 = 0x80;
          }
          pbVar2 = pbVar2 + bVar6;
          iVar1 = iVar1 >> 1;
          bVar6 = iVar1 == 0;
          if (bVar6) {
            iVar1 = 0x80;
          }
          pbVar5 = pbVar5 + bVar6;
          local_1c = local_1c + -1;
        } while (local_1c != 0);
        iVar1 = 0;
        local_1c = 0;
      }
    }
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_1c)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

