/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0046e596 */

int __fastcall FUN_0046e596(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_1c;
  local_1c = param_1[7];
  *(undefined4 *)(param_2 + 0x84) = 0;
  *(undefined4 *)(param_2 + 0x88) = 0;
  *(undefined4 *)(param_2 + 0x8c) = 0;
  uVar1 = FUN_00420b00((int)param_1);
  uVar2 = FUN_004209e8(param_1,&local_18);
  iVar3 = local_18;
  if (local_18 != 0) goto LAB_0046e5e8;
  while (uVar2 == 0x774f4646) {
    local_18 = FUN_00420696((int)param_1,uVar1);
    iVar3 = local_18;
    if ((local_18 != 0) ||
       (local_18 = FUN_0046e7f1(param_1,param_2), iVar3 = local_18, local_18 != 0))
    goto LAB_0046e5e8;
    param_1 = *(int **)(param_2 + 0x68);
    uVar1 = FUN_00420b00((int)param_1);
    uVar2 = FUN_004209e8(param_1,&local_18);
    iVar3 = local_18;
    if (local_18 != 0) goto LAB_0046e5e8;
  }
  iVar3 = 2;
  if ((int)uVar2 < 0x4f54544f) {
    if ((int)uVar2 < 0x10000) {
      if ((uVar2 != 0xa56b6264) && (uVar2 != 0xa56c7374)) goto LAB_0046e5e8;
    }
    else if ((uVar2 != 0x10000) && (uVar2 != 0x20000)) goto LAB_0046e5e8;
  }
  else if ((int)uVar2 < 0x74746366) {
    if ((uVar2 != 0x4f54544f) && (uVar2 != 0x74727565)) goto LAB_0046e5e8;
  }
  else if ((uVar2 != 0x74746366) && (uVar2 != 0x74797031)) goto LAB_0046e5e8;
  *(undefined4 *)(param_2 + 0x84) = 0x74746366;
  if (uVar2 == 0x74746366) {
    local_18 = FUN_00420fcf(param_1,0x4f64d0,param_2 + 0x84);
    iVar3 = local_18;
    if (local_18 == 0) {
      uVar1 = *(uint *)(param_2 + 0x8c);
      if (uVar1 == 0) {
        iVar3 = 8;
      }
      else {
        iVar3 = 10;
        if (uVar1 <= (uint)param_1[1] >> 5) {
          iVar3 = FUN_0041efcd(local_1c,4,0,uVar1,0,&local_18);
          *(int *)(param_2 + 0x90) = iVar3;
          iVar3 = local_18;
          if ((local_18 == 0) &&
             (local_18 = FUN_00420be1(param_1,*(int *)(param_2 + 0x8c) << 2), iVar3 = local_18,
             local_18 == 0)) {
            if (0 < *(int *)(param_2 + 0x8c)) {
              iVar3 = 0;
              do {
                uVar1 = FUN_00420d5c((int)param_1);
                *(uint *)(*(int *)(param_2 + 0x90) + iVar3 * 4) = uVar1;
                iVar3 = iVar3 + 1;
              } while (iVar3 < *(int *)(param_2 + 0x8c));
            }
            FUN_00420cde(param_1);
            iVar3 = local_18;
          }
        }
      }
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x88) = 0x10000;
    *(undefined4 *)(param_2 + 0x8c) = 1;
    puVar4 = (uint *)FUN_0041e773(local_1c,4,&local_18);
    *(uint **)(param_2 + 0x90) = puVar4;
    iVar3 = local_18;
    if (local_18 == 0) {
      *puVar4 = uVar1;
    }
  }
LAB_0046e5e8:
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_1c)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_1c);
  }
  return iVar3;
}

