/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004763bf */

undefined4 __fastcall
FUN_004763bf(byte *param_1,undefined4 param_2,int param_3,int param_4,uint param_5)

{
  undefined4 uVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  byte *local_224;
  int local_220;
  int local_21c;
  uint local_218;
  undefined4 local_214;
  int local_210;
  undefined8 local_20c;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_224;
  uVar5 = *(uint *)(param_1 + 0x30);
  local_20c = *(undefined8 *)(param_1 + 0x2c);
  local_214 = param_2;
  local_210 = param_3;
  local_220 = param_4;
  local_21c = param_4;
  local_218 = param_5;
  piVar3 = &local_21c;
  local_224 = param_1;
  do {
    uVar6 = param_5;
    if ((int)uVar5 < (int)param_5) {
      uVar6 = uVar5;
    }
    uVar2 = -*(int *)(local_224 + 4);
    if (param_3 < (int)(uVar6 & uVar2)) {
LAB_00476435:
      piVar4 = piVar3 + 4;
      FUN_00476911(piVar3);
    }
    else {
      uVar6 = param_5;
      if ((int)param_5 < (int)uVar5) {
        uVar6 = uVar5;
      }
      if ((int)((*(int *)(local_224 + 4) + uVar6) - 1 & uVar2) < param_3) goto LAB_00476435;
      if (uVar5 != param_5) {
        iVar7 = ((int)param_5 <= (int)uVar5) + 1;
        if (*(int *)(local_224 + 0x50) == iVar7) {
LAB_0047647f:
          if ((int)uVar5 < (int)param_5) {
            uVar1 = FUN_0047695f(local_224,2,piVar3,FUN_00476911,*(uint *)(local_224 + 0x34),
                                 *(uint *)(local_224 + 0x38));
          }
          else {
            uVar1 = FUN_00476acb(local_224,2,piVar3,FUN_00476911,*(uint *)(local_224 + 0x34),
                                 *(uint *)(local_224 + 0x38));
          }
          if ((char)uVar1 == '\0') goto LAB_004764b1;
        }
        else if (*(int *)(local_224 + 0x50) == 0) {
LAB_0047646e:
          uVar1 = FUN_0047669e(local_224,iVar7);
          if ((char)uVar1 == '\0') goto LAB_0047647f;
        }
        else {
          uVar1 = FUN_00476211((int)local_224);
          if ((char)uVar1 == '\0') goto LAB_0047646e;
        }
        uVar1 = CONCAT31((int3)((uint)uVar1 >> 8),1);
        goto LAB_004764e4;
      }
LAB_004764b1:
      *(int *)(local_224 + 0x2c) = local_220;
      *(uint *)(local_224 + 0x30) = param_5;
      if (piVar3 == &local_21c) {
        uVar1 = 0;
LAB_004764e4:
        if (DAT_0050e8c0 == (local_14 ^ (uint)&local_224)) {
          return uVar1;
        }
                    /* WARNING: Subroutine does not return */
        FUN_0047f2c0(local_14 ^ (uint)&local_224);
      }
      piVar4 = piVar3 + -4;
    }
    uVar5 = piVar4[5];
    param_3 = piVar4[3];
    local_220 = *piVar4;
    param_5 = piVar4[1];
    piVar3 = piVar4;
  } while( true );
}

