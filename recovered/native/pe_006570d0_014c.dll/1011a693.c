/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011a693 */

void FUN_1011a693(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  undefined4 *local_28;
  int local_24;
  int *local_20;
  undefined8 local_1c;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_28;
  if ((*(byte *)(param_1 + 0x27b5) & 4) != 0) {
    FUN_100f99e6("[docking] DockContextProcessUndockNode node %08X\n",*param_2);
  }
  iVar1 = param_2[6];
  if ((iVar1 == 0) || ((*(byte *)((int)param_2 + 0x11) & 8) != 0)) {
    puVar5 = (undefined4 *)FUN_1011b94c();
    *(undefined8 *)(puVar5 + 0xd) = *(undefined8 *)(param_2 + 0xd);
    *(undefined8 *)(puVar5 + 0xf) = *(undefined8 *)(param_2 + 0xf);
    *(undefined8 *)(puVar5 + 0x11) = *(undefined8 *)(param_2 + 0x11);
    FUN_1011b9ab();
    FUN_1011ba73();
  }
  else {
    uVar6 = (uint)(*(undefined4 **)(iVar1 + 0x1c) != param_2);
    *(undefined4 *)(iVar1 + 0x1c + uVar6 * 4) = 0;
    FUN_1011bb00(*(undefined4 *)(param_2[6] + 0x1c + (uVar6 ^ 1) * 4));
    *(uint *)(param_2[6] + 0xa8) = *(uint *)(param_2[6] + 0xa8) & 0xfffffe3f | 0x80;
    param_2[6] = 0;
    puVar5 = param_2;
  }
  piVar8 = (int *)puVar5[0xb];
  if (puVar5[9] != 0) {
    local_20 = piVar8 + puVar5[9];
    local_28 = puVar5;
    do {
      iVar1 = *piVar8;
      uVar6 = *(uint *)(iVar1 + 0xc) & 0xfeffffff;
      *(uint *)(iVar1 + 0xc) = uVar6;
      iVar2 = *(int *)(iVar1 + 0x3a0);
      if (iVar2 != 0) {
        iVar3 = *(int *)(iVar2 + 0x1d8);
        piVar4 = *(int **)(iVar2 + 0x1e0);
        piVar7 = piVar4;
        if (0 < iVar3) {
          do {
            if (*piVar7 == iVar1) break;
            piVar7 = piVar7 + 1;
          } while (piVar7 < piVar4 + iVar3);
        }
        local_24 = iVar2;
        if (piVar7 < piVar4 + iVar3) {
          FUN_1025b2d0(piVar7,piVar7 + 1,(iVar3 + ((uint)~((int)piVar7 - (int)piVar4) >> 2)) * 4);
          *(int *)(local_24 + 0x1d8) = *(int *)(local_24 + 0x1d8) + -1;
          uVar6 = *(uint *)(iVar1 + 0xc);
        }
      }
      FUN_1010d498(iVar1,uVar6,0);
      piVar8 = piVar8 + 1;
    } while (piVar8 != local_20);
    piVar8 = (int *)local_28[0xb];
    puVar5 = local_28;
  }
  puVar5[0x2a] = puVar5[0x2a] & 0xffffffc0 | 9;
  FUN_1011b8ea(*(undefined4 *)(*piVar8 + 0x3c));
  *(undefined8 *)(puVar5 + 0xf) = local_1c;
  *(byte *)((int)puVar5 + 0xad) = *(byte *)((int)puVar5 + 0xad) | 1;
  if (DAT_10388d00 != (local_14 ^ (uint)&local_28)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  FUN_10118556();
  return;
}

