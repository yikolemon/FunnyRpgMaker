/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140029a7e */

void Catch_140029a7e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  longlong lVar11;
  
  plVar1 = (longlong *)(param_2 + 0x80);
  *(longlong *)(param_2 + 0x48) = *plVar1;
  puVar3 = *(undefined4 **)(*plVar1 + 8);
  if (*(undefined4 **)(param_2 + 0x78) != puVar3) {
    puVar10 = *(undefined4 **)(param_2 + 0x88);
    lVar4 = *(longlong *)(param_2 + 0x68);
    do {
      puVar2 = (undefined4 *)((longlong)puVar10 + lVar4);
      uVar5 = *puVar2;
      uVar6 = puVar2[1];
      uVar7 = puVar2[2];
      uVar8 = puVar2[3];
      uVar9 = *(undefined8 *)(puVar2 + 6);
      *(undefined8 *)(puVar10 + 4) = *(undefined8 *)(puVar2 + 4);
      *(undefined8 *)(puVar10 + 6) = uVar9;
      *puVar10 = uVar5;
      puVar10[1] = uVar6;
      puVar10[2] = uVar7;
      puVar10[3] = uVar8;
      *(undefined8 *)(puVar2 + 4) = 0;
      *(undefined8 *)(puVar2 + 6) = 0xf;
      *(undefined1 *)puVar2 = 0;
      puVar10 = puVar10 + 8;
    } while (puVar2 + 8 != puVar3);
    lVar4 = *(longlong *)(*plVar1 + 8);
    if (*(longlong *)(param_2 + 0x78) != lVar4) {
      lVar11 = *(longlong *)(param_2 + 0x78);
      do {
        FUN_1400017de(lVar11);
        lVar11 = lVar11 + 0x20;
      } while (lVar11 != lVar4);
    }
  }
  *(undefined8 *)(*plVar1 + 8) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_2 + 0x48) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_140106270(0,0);
}

