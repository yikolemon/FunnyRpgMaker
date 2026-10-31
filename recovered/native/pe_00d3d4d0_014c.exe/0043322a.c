/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043322a */

int __fastcall
FUN_0043322a(int param_1,int param_2,int param_3,char param_4,int param_5,uint *param_6)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_18;
  local_18 = 0;
  uVar6 = *(uint *)(param_1 + 0xc);
  if (uVar6 < 0xc) {
    if (*(int *)(param_1 + 0x14) == 0) {
      *(int *)(param_1 + 0x14) = param_1 + 0x334;
      *(undefined4 *)(param_1 + 0x10) = 0xc;
    }
LAB_00433265:
    puVar3 = *(undefined4 **)(param_1 + 0x14);
    puVar7 = puVar3 + uVar6 * 0xb;
    if (uVar6 != 0) goto LAB_0043328e;
    iVar2 = 0;
    puVar8 = puVar7;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x10);
    if (uVar1 <= uVar6) {
      puVar8 = (undefined4 *)0x0;
      iVar2 = 0x40;
      if (0x2e8ba2d < uVar1) goto LAB_004332d6;
      uVar4 = (uVar1 >> 2) + uVar1 + 4;
      uVar6 = 0x2e8ba2e;
      if (uVar4 < 0x2e8ba2e) {
        uVar6 = uVar4;
      }
      if (*(int *)(param_1 + 0x14) == param_1 + 0x334) {
        puVar8 = (undefined4 *)0x0;
        puVar5 = (uint *)FUN_0041c6b3(param_5,0x2c,0,uVar6,0,&local_18);
        *(uint **)(param_1 + 0x14) = puVar5;
        iVar2 = local_18;
        if (local_18 != 0) goto LAB_004332d6;
        FUN_004878c0(puVar5,(uint *)(param_1 + 0x334),0x210);
      }
      else {
        iVar2 = FUN_0041c6b3(param_5,0x2c,uVar1,uVar6,*(int *)(param_1 + 0x14),&local_18);
        *(int *)(param_1 + 0x14) = iVar2;
        iVar2 = local_18;
        if (local_18 != 0) goto LAB_004332d6;
      }
      *(uint *)(param_1 + 0x10) = uVar6;
      uVar6 = *(uint *)(param_1 + 0xc);
      goto LAB_00433265;
    }
    puVar3 = *(undefined4 **)(param_1 + 0x14);
    puVar7 = puVar3 + uVar6 * 0xb;
LAB_0043328e:
    do {
      iVar2 = (int)*(short *)(puVar7 + -0xb);
      puVar8 = puVar7;
      if (param_4 == '\0') {
        if (iVar2 < param_2) break;
      }
      else if (param_2 < iVar2) break;
      if ((param_2 == iVar2) && (param_3 == *(int *)(param_1 + 0x18))) break;
      puVar8 = puVar7 + -0xb;
      puVar7[7] = puVar7[-4];
      puVar7[8] = puVar7[-3];
      puVar7[9] = puVar7[-2];
      puVar7[10] = puVar7[-1];
      puVar7[4] = puVar7[-7];
      puVar7[5] = puVar7[-6];
      puVar7[6] = puVar7[-5];
      puVar7[7] = puVar7[-4];
      *puVar7 = *puVar8;
      puVar7[1] = puVar7[-10];
      puVar7[2] = puVar7[-9];
      puVar7[3] = puVar7[-8];
      puVar7 = puVar8;
    } while (puVar3 < puVar8);
    iVar2 = *(int *)(param_1 + 0xc);
  }
  *(int *)(param_1 + 0xc) = iVar2 + 1;
  iVar2 = 0;
LAB_004332d6:
  *param_6 = (uint)puVar8;
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_18)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_18);
  }
  return iVar2;
}

