/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101f7272 */

int __fastcall FUN_101f7272(int *param_1,int param_2,char param_3,char param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_1c;
  local_1c = *(undefined4 *)(param_2 + 0x1c);
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = param_2;
  iVar2 = FUN_101c4a88(param_2);
  param_1[1] = iVar2;
  if (param_4 == '\0') {
    uVar3 = FUN_101c4692(param_2,&local_18);
    if (local_18 == 0) {
      uVar3 = uVar3 & 0xffff;
      iVar2 = 3;
      goto LAB_101f72e9;
    }
  }
  else {
    uVar3 = FUN_101c4970(param_2,&local_18);
    if (local_18 == 0) {
      iVar2 = 5;
LAB_101f72e9:
      param_1[2] = iVar2;
      iVar2 = 0;
      if (uVar3 == 0) goto LAB_101f737b;
      bVar1 = FUN_101c4d1e(param_2,&local_18);
      if (local_18 == 0) {
        if ((byte)(bVar1 - 5) < 0xfc) {
LAB_101f7317:
          local_18 = 8;
        }
        else {
          param_1[3] = uVar3;
          *(byte *)(param_1 + 4) = bVar1;
          param_1[5] = (uVar3 + 1) * (uint)bVar1 + param_1[1] + param_1[2];
          local_18 = FUN_101c4672(param_2,uVar3 * bVar1);
          if ((local_18 == 0) && (iVar4 = FUN_101f68d2(), local_18 == 0)) {
            if (iVar4 == 0) goto LAB_101f7317;
            iVar4 = iVar4 + -1;
            param_1[6] = iVar4;
            if (param_3 == '\0') {
              local_18 = FUN_101c4672(param_2,iVar4);
            }
            else {
              local_18 = FUN_101c4b40(param_2,iVar4,param_1 + 8);
            }
            if (local_18 == 0) goto LAB_101f737b;
          }
        }
      }
    }
  }
  FUN_101c0017(local_1c,param_1[7]);
  param_1[7] = 0;
  iVar2 = local_18;
LAB_101f737b:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_1c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return iVar2;
}

