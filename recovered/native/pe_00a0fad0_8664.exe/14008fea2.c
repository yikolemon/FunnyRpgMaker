/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14008fea2 */

void FUN_14008fea2(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 auStack_48 [40];
  ulonglong local_20;
  
  local_20 = DAT_1401c9640 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)(param_2 + 0x10);
  FUN_1400901d6(plVar1,*(undefined4 *)(param_1 + 0xe8));
  lVar3 = 8;
  if (*(char *)(param_1 + 0xf3) != '\0') {
    lVar3 = 0x40;
  }
  puVar2 = *(undefined8 **)(param_2 + 0x10);
  *(undefined1 *)(puVar2 + 2) = 1;
  *puVar2 = *(undefined8 *)(param_1 + 0xd0);
  puVar2[1] = *(undefined8 *)(param_1 + lVar3);
  if (1 < *(uint *)(param_1 + 0xe8)) {
    lVar4 = 0;
    lVar7 = 0;
    uVar5 = 0;
    do {
      if ((*(ulonglong *)(*(longlong *)(param_1 + 0x20 + lVar3) + (uVar5 >> 6) * 8) >>
           (uVar5 & 0x3f) & 1) == 0) {
        *(undefined1 *)(*plVar1 + 0x28 + lVar7) = 0;
        uVar8 = *(undefined8 *)(param_1 + 0xd8);
        *(undefined8 *)(*plVar1 + 0x18 + lVar7) = uVar8;
      }
      else {
        *(undefined1 *)(*plVar1 + 0x28 + lVar7) = 1;
        *(undefined8 *)(*plVar1 + 0x18 + lVar7) =
             *(undefined8 *)(*(longlong *)(param_1 + 8 + lVar3) + lVar4);
        uVar8 = *(undefined8 *)(*(longlong *)(param_1 + 8 + lVar3) + 8 + lVar4);
      }
      *(undefined8 *)(*plVar1 + 0x20 + lVar7) = uVar8;
      lVar7 = lVar7 + 0x18;
      lVar4 = lVar4 + 0x10;
      uVar6 = uVar5 + 2;
      uVar5 = uVar5 + 1;
    } while (uVar6 < *(uint *)(param_1 + 0xe8));
  }
  *(undefined8 *)(param_2 + 0x30) = **(undefined8 **)(param_2 + 0x10);
  lVar3 = (*(undefined8 **)(param_2 + 0x10))[1];
  *(longlong *)(param_2 + 0x40) = lVar3;
  lVar4 = *(longlong *)(param_1 + 0xd8);
  *(longlong *)(param_2 + 0x48) = lVar4;
  *(bool *)(param_2 + 0x50) = lVar3 != lVar4;
  uVar8 = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(param_2 + 0x58) = uVar8;
  *(undefined8 *)(param_2 + 0x60) = uVar8;
  if (DAT_1401c9640 == (local_20 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_20 ^ (ulonglong)auStack_48);
}

