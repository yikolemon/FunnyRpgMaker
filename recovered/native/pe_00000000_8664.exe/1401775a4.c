/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401775a4 */

undefined8 FUN_1401775a4(longlong *param_1,longlong param_2,ulonglong param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  
  if (*(int *)(param_2 + 0x4d4) == 0) {
    uVar3 = 0x8e;
  }
  else {
    lVar2 = *(longlong *)(param_2 + 0xa0);
    iVar1 = *(int *)(*(longlong *)(param_2 + 0x480) + (param_3 & 0xffffffff) * 4);
    uVar3 = FUN_14012d612(lVar2,*(undefined4 *)(param_2 + 0x4d0));
    if ((int)uVar3 == 0) {
      *param_1 = param_2;
      param_1[1] = lVar2;
      param_1[2] = *(longlong *)(param_2 + 0x78) + 0x68;
      param_1[3] = param_4;
      *(undefined2 *)(param_1 + 4) = 0;
      *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)(param_2 + 0x4d0);
      *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x4d4);
      lVar2 = *(longlong *)(param_2 + 0x468);
      param_1[7] = lVar2;
      param_1[8] = (ulonglong)*(uint *)(param_2 + 0x470) + lVar2;
      uVar3 = 3;
      if (iVar1 * 0x30 + 0x37U <= *(uint *)(param_2 + 0x470)) {
        uVar4 = (ulonglong)(uint)(iVar1 * 0x30);
        uVar5 = *(uint *)(lVar2 + 8 + uVar4);
        uVar6 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
        *(uint *)((longlong)param_1 + 0x2c) = uVar6;
        uVar5 = *(uint *)(lVar2 + 0x10 + uVar4);
        uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
        *(uint *)(param_1 + 6) = uVar5;
        *(undefined1 *)((longlong)param_1 + 0x22) = *(undefined1 *)(lVar2 + 0x36 + uVar4);
        if ((*(uint *)(param_2 + 0x470) < uVar6) ||
           (uVar3 = 0, *(uint *)(param_2 + 0x470) - uVar6 >> 3 < uVar5)) {
          uVar3 = 3;
        }
      }
    }
  }
  return uVar3;
}

