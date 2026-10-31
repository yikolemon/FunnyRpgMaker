/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18007f036 */

void FUN_18007f036(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  
  if (param_1 != param_2) {
    lVar6 = *(longlong *)(param_1 + 0x80);
    uVar7 = *(undefined8 *)(param_1 + 0x68);
    uVar8 = *(undefined8 *)(param_1 + 0x74);
    uVar2 = *(undefined1 *)(param_1 + 0x71);
    uVar3 = *(undefined1 *)(param_1 + 0x7c);
    lVar9 = **(longlong **)(param_1 + 0x18);
    lVar1 = param_1 + 0x70;
    lVar10 = **(longlong **)(param_1 + 0x38);
    uVar11 = **(undefined8 **)(param_1 + 0x20);
    uVar12 = **(undefined8 **)(param_1 + 0x40);
    uVar4 = **(undefined4 **)(param_1 + 0x58);
    uVar5 = **(undefined4 **)(param_1 + 0x50);
    FUN_180074952(param_1,*(longlong *)(param_2 + 0x80),*(longlong *)(param_2 + 0x80) != 0);
    uVar13 = **(undefined8 **)(param_2 + 0x40);
    uVar16 = **(undefined4 **)(param_2 + 0x58);
    **(undefined8 **)(param_1 + 0x20) = **(undefined8 **)(param_2 + 0x20);
    **(undefined8 **)(param_1 + 0x40) = uVar13;
    **(undefined4 **)(param_1 + 0x58) = uVar16;
    lVar14 = **(longlong **)(param_2 + 0x18);
    lVar15 = **(longlong **)(param_2 + 0x38);
    if (lVar14 == param_2 + 0x70) {
      **(longlong **)(param_1 + 0x18) = lVar1;
      if (lVar15 == lVar14) {
        **(longlong **)(param_1 + 0x38) = lVar1;
        uVar16 = 1;
      }
      else {
        **(longlong **)(param_1 + 0x38) = param_1 + 0x71;
        uVar16 = 0;
      }
    }
    else {
      uVar16 = **(undefined4 **)(param_2 + 0x50);
      **(longlong **)(param_1 + 0x18) = lVar14;
      **(longlong **)(param_1 + 0x38) = lVar15;
    }
    **(undefined4 **)(param_1 + 0x50) = uVar16;
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
    *(undefined8 *)(param_1 + 0x74) = *(undefined8 *)(param_2 + 0x74);
    *(undefined1 *)(param_1 + 0x71) = *(undefined1 *)(param_2 + 0x71);
    *(undefined1 *)(param_1 + 0x7c) = *(undefined1 *)(param_2 + 0x7c);
    FUN_180074952(param_2,lVar6,lVar6 != 0);
    **(undefined8 **)(param_2 + 0x20) = uVar11;
    **(undefined8 **)(param_2 + 0x40) = uVar12;
    **(undefined4 **)(param_2 + 0x58) = uVar4;
    if (lVar9 == lVar1) {
      **(longlong **)(param_2 + 0x18) = param_2 + 0x70;
      if (lVar10 == lVar1) {
        **(longlong **)(param_2 + 0x38) = param_2 + 0x70;
        **(undefined4 **)(param_2 + 0x50) = 1;
      }
      else {
        **(longlong **)(param_2 + 0x38) = param_2 + 0x71;
        **(undefined4 **)(param_2 + 0x50) = 0;
      }
    }
    else {
      **(longlong **)(param_2 + 0x18) = lVar9;
      **(longlong **)(param_2 + 0x38) = lVar10;
      **(undefined4 **)(param_2 + 0x50) = uVar5;
    }
    *(undefined8 *)(param_2 + 0x68) = uVar7;
    *(undefined8 *)(param_2 + 0x74) = uVar8;
    *(undefined1 *)(param_2 + 0x71) = uVar2;
    *(undefined1 *)(param_2 + 0x7c) = uVar3;
    uVar7 = *(undefined8 *)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
    *(undefined8 *)(param_2 + 0x88) = uVar7;
    uVar7 = *(undefined8 *)(param_1 + 0x90);
    *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
    *(undefined8 *)(param_2 + 0x90) = uVar7;
    uVar2 = *(undefined1 *)(param_1 + 0x70);
    *(undefined1 *)(param_1 + 0x70) = *(undefined1 *)(param_2 + 0x70);
    *(undefined1 *)(param_2 + 0x70) = uVar2;
    uVar7 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
    *(undefined8 *)(param_2 + 0x60) = uVar7;
  }
  return;
}

