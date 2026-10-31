/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1012e8bb */

uint FUN_1012e8bb(undefined4 param_1,undefined8 *param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 unaff_EBX;
  uint uVar6;
  undefined1 auStack_34 [2];
  byte local_32;
  char local_31;
  int local_30;
  int local_2c;
  byte local_26;
  char local_25;
  undefined4 local_24;
  undefined4 local_20;
  undefined8 local_1c;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)auStack_34;
  local_30 = *(int *)(DAT_1039d74c + 0x14cc);
  local_24 = *(undefined4 *)param_2;
  local_20 = *(undefined4 *)((int)param_2 + 4);
  local_2c = DAT_1039d74c;
  local_1c = CONCAT44(*(float *)(DAT_1039d74c + 0x1228) + (float)((ulonglong)*param_2 >> 0x20),
                      *(float *)(DAT_1039d74c + 0x1228) + (float)*param_2);
  cVar1 = FUN_1010c9d8(&local_24,param_1,0,0);
  bVar2 = FUN_1012d77e(&local_24,param_1,&local_25,&local_26,0);
  uVar6 = CONCAT31(CONCAT21((short)((uint)unaff_EBX >> 0x10),cVar1),bVar2);
  if (cVar1 != '\0') {
    local_31 = local_25;
    iVar5 = 0x16;
    if (local_25 != '\0') {
      iVar5 = local_26 + 0x17;
    }
    local_32 = bVar2;
    uVar3 = FUN_100fcb39(iVar5,0x3f800000);
    uVar4 = FUN_100fcb39(0,0x3f800000);
    if (local_26 != 0 || local_31 != '\0') {
      FUN_1018b85a(&local_24,&local_1c,uVar3,0,0);
    }
    FUN_100fe25e(&local_24,param_1,2);
    if (param_3 == 0) {
      FUN_10193b2c(*(undefined4 *)(local_30 + 0x2e8),local_24,local_20,uVar4,
                   (*(byte *)(local_30 + 0xfc) ^ 1) * 2 + 1,0x3f800000);
    }
    else {
      FUN_1019407c(*(undefined4 *)(local_30 + 0x2e8),local_24,local_20,
                   *(undefined4 *)(local_2c + 0x1228),uVar4);
    }
    uVar6 = (uint)local_32;
    cVar1 = FUN_1010bee1();
    if (cVar1 != '\0') {
      cVar1 = FUN_1010378f(0,0xbf800000);
      if (cVar1 != '\0') {
        FUN_101036bb(local_30,param_3,1);
      }
    }
  }
  if (DAT_10388d00 == (local_14 ^ (uint)auStack_34)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

