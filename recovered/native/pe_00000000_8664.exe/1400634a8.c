/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400634a8 */

ushort * FUN_1400634a8(longlong param_1,longlong param_2,ushort *param_3)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  ushort *puVar4;
  longlong lVar5;
  short sVar6;
  short sVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  
  uVar9 = (ulonglong)*param_3;
  if ((*(byte *)(param_1 + 0xe1) & 1) != 0) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 200) + 8);
    uVar3 = (**(code **)(*plVar1 + 0x40))(plVar1,uVar9);
    uVar9 = (ulonglong)uVar3;
  }
  if (*(longlong *)(param_2 + 0x20) != 0) {
    puVar4 = (ushort *)
             FUN_140063ba3(uVar9,param_3,*(undefined8 *)(param_1 + 0xd8),
                           *(longlong *)(param_2 + 0x20),*(undefined8 *)(param_1 + 200),
                           *(undefined4 *)(param_1 + 0xe0));
    if (puVar4 != param_3) {
      uVar3 = 1;
      goto LAB_1400636f6;
    }
  }
  puVar4 = param_3 + 1;
  if (*(longlong *)(param_2 + 0x38) != 0) {
    if ((*(byte *)(param_1 + 0xe1) & 8) == 0) {
      cVar2 = FUN_140063f17(uVar9);
    }
    else {
      cVar2 = FUN_140063cfc(uVar9,*(longlong *)(param_2 + 0x38),*(undefined8 *)(param_1 + 200));
    }
    uVar3 = 1;
    if (cVar2 != '\0') goto LAB_1400636f6;
  }
  uVar3 = (uint)(uVar9 & 0xffff);
  if (uVar3 < 0x100) {
    if (*(longlong *)(param_2 + 0x28) != 0) {
      uVar3 = (uint)((*(byte *)(*(longlong *)(param_2 + 0x28) + ((uVar9 & 0xffff) >> 3)) >>
                      (uVar3 & 7) & 1) != 0);
      goto LAB_1400636f6;
    }
  }
  else {
    lVar5 = *(longlong *)(param_2 + 0x30);
    if (lVar5 != 0) {
      lVar5 = FUN_1400595ca(*(longlong *)(lVar5 + 8),
                            *(longlong *)(lVar5 + 8) + (ulonglong)*(uint *)(lVar5 + 4) * 2,uVar9);
      uVar3 = 1;
      if (lVar5 != (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x30) + 4) * 2 +
                   *(longlong *)(*(longlong *)(param_2 + 0x30) + 8)) goto LAB_1400636f6;
    }
    sVar7 = *(short *)(param_2 + 0x40);
    if (sVar7 != 0) {
      sVar6 = 0x107;
      if (sVar7 != -1) {
        sVar6 = sVar7;
      }
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 200) + 8);
      cVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,sVar6,uVar9);
      uVar3 = 1;
      if (cVar2 != '\0') goto LAB_1400636f6;
    }
    if ((*(byte *)(param_2 + 0xd) & 8) != 0) {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 200) + 8);
      cVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,0x107,uVar9);
      uVar3 = 1;
      if (cVar2 != '\0') goto LAB_1400636f6;
    }
    if (*(longlong *)(param_2 + 0x48) != 0) {
      cVar2 = FUN_140063f56(uVar9,*(longlong *)(param_2 + 0x48),*(undefined8 *)(param_1 + 200));
      uVar3 = 1;
      if (cVar2 != '\0') goto LAB_1400636f6;
    }
    uVar3 = *(uint *)(param_2 + 0xc);
    if ((uVar3 >> 8 & 1) != 0) {
      uVar8 = 0x107;
      if ((short)*(undefined4 *)(param_1 + 0xec) != -1) {
        uVar8 = *(undefined4 *)(param_1 + 0xec);
      }
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 200) + 8);
      cVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,uVar8,uVar9);
      uVar3 = 1;
      if (cVar2 == '\0') goto LAB_1400636f6;
      uVar3 = *(uint *)(param_2 + 0xc);
    }
    if ((uVar3 >> 9 & 1) != 0) {
      sVar7 = 0x107;
      if (*(short *)(param_1 + 0xee) != -1) {
        sVar7 = *(short *)(param_1 + 0xee);
      }
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 200) + 8);
      cVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,sVar7,uVar9);
      uVar3 = 1;
      if (cVar2 == '\0') goto LAB_1400636f6;
      uVar3 = *(uint *)(param_2 + 0xc);
    }
    if ((uVar3 >> 10 & 1) != 0) {
      uVar8 = 0x107;
      if ((short)*(undefined4 *)(param_1 + 0xf0) != -1) {
        uVar8 = *(undefined4 *)(param_1 + 0xf0);
      }
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 200) + 8);
      cVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,uVar8,uVar9);
      uVar3 = 1;
      if (cVar2 == '\0') goto LAB_1400636f6;
    }
  }
  uVar3 = 0;
LAB_1400636f6:
  if (uVar3 == (*(uint *)(param_2 + 0xc) & 1)) {
    puVar4 = param_3;
  }
  return puVar4;
}

