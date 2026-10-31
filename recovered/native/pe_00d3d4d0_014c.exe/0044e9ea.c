/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0044e9ea */

int __fastcall FUN_0044e9ea(undefined4 *param_1,int *param_2,char param_3,char param_4)

{
  byte bVar1;
  ushort uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_1c;
  local_1c = param_2[7];
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = param_2;
  uVar3 = FUN_00420b00((int)param_2);
  param_1[1] = uVar3;
  if (param_4 == '\0') {
    uVar2 = FUN_0042070a(param_2,&local_18);
    if (local_18 == 0) {
      uVar4 = (uint)uVar2;
      uVar3 = 3;
      goto LAB_0044ea61;
    }
  }
  else {
    uVar4 = FUN_004209e8(param_2,&local_18);
    if (local_18 == 0) {
      uVar3 = 5;
LAB_0044ea61:
      param_1[2] = uVar3;
      iVar5 = 0;
      if (uVar4 == 0) goto LAB_0044eaf3;
      bVar1 = FUN_00420d96(param_2,&local_18);
      if (local_18 == 0) {
        if ((byte)(bVar1 - 5) < 0xfc) {
LAB_0044ea8f:
          local_18 = 8;
        }
        else {
          param_1[3] = uVar4;
          *(byte *)(param_1 + 4) = bVar1;
          param_1[5] = (uVar4 + 1) * (uint)bVar1 + param_1[1] + param_1[2];
          local_18 = FUN_004206ea((int)param_2,uVar4 * bVar1);
          if ((local_18 == 0) && (uVar4 = FUN_0044e04a(param_1,&local_18), local_18 == 0)) {
            if (uVar4 == 0) goto LAB_0044ea8f;
            uVar4 = uVar4 - 1;
            param_1[6] = uVar4;
            if (param_3 == '\0') {
              local_18 = FUN_004206ea((int)param_2,uVar4);
            }
            else {
              local_18 = FUN_00420bb8(param_2,uVar4,param_1 + 8);
            }
            if (local_18 == 0) goto LAB_0044eaf3;
          }
        }
      }
    }
  }
  FUN_0041c607(local_1c,param_1[7]);
  param_1[7] = 0;
  iVar5 = local_18;
LAB_0044eaf3:
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_1c)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_1c);
  }
  return iVar5;
}

