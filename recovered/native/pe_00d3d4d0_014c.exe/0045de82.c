/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0045de82 */

int __fastcall FUN_0045de82(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  int *local_24;
  int *local_20;
  int iStack_1c;
  uint *local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_24;
  piVar5 = (int *)param_1[1];
  iVar6 = 0;
  local_24 = piVar5;
  local_20 = param_1;
  do {
    if (*(int *)(param_2 + iVar6 * 8) == 0) {
      puVar2 = (uint *)FUN_0045e0ea(piVar5);
    }
    else {
      puVar2 = (uint *)FUN_0045e134(piVar5);
    }
    iVar7 = iVar6;
    local_18 = puVar2;
    if (puVar2 == (uint *)0x0) break;
    uVar4 = *(uint *)(param_2 + iVar6 * 8);
    if (5 < uVar4) goto LAB_0045df54;
    uVar1 = (*piVar5 - (int)puVar2) - 1;
    switch(uVar4) {
    default:
      puVar3 = (uint *)FUN_0041e773(*local_20,*piVar5 - (int)puVar2,&iStack_1c);
      *(uint **)(param_2 + 4 + iVar6 * 8) = puVar3;
      piVar5 = local_24;
      if (iStack_1c == 0) {
        FUN_004878c0(puVar3,puVar2,uVar1);
        *(undefined1 *)(*(int *)(param_2 + 4 + iVar6 * 8) + uVar1) = 0;
        piVar5 = local_24;
      }
      break;
    case 2:
      uVar4 = FUN_0045e1f6((uint *)&local_18,(byte *)((int)puVar2 + uVar1),0);
      goto LAB_0045df4d;
    case 3:
      uVar4 = FUN_0045e4ee(&local_18,(byte *)((int)puVar2 + uVar1));
LAB_0045df4d:
      *(uint *)(param_2 + 4 + iVar6 * 8) = uVar4;
      piVar5 = local_24;
      break;
    case 4:
      if (uVar1 == 4) {
        uVar4 = FUN_00493180((int)puVar2,(uint *)&DAT_00503c61,4);
        bVar8 = uVar4 == 0;
      }
      else {
        bVar8 = false;
      }
      *(bool *)(param_2 + 4 + iVar6 * 8) = bVar8;
      piVar5 = local_24;
      break;
    case 5:
      if ((code *)local_20[3] != (code *)0x0) {
        uVar4 = (*(code *)local_20[3])(puVar2,uVar1,local_20[4]);
        goto LAB_0045df4d;
      }
      *(undefined4 *)(param_2 + 4 + iVar6 * 8) = 0;
      piVar5 = local_24;
    }
LAB_0045df54:
    iVar6 = iVar6 + 1;
    iVar7 = param_3;
  } while (param_3 != iVar6);
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_24)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_24);
  }
  return iVar7;
}

