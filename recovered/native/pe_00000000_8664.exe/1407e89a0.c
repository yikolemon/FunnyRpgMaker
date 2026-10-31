/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407e89a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1407e89a0(ulonglong param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint *puVar8;
  
  puVar8 = (uint *)(ulonglong)((int)&stack0xffffffffffffffe0 - 8);
  uVar1 = *(uint *)(param_1 + 4);
  puVar8[-2] = 0x407e89c0;
  puVar8[-1] = 1;
  FUN_1407eae6c(param_1,(ulonglong)(puVar8 + 7) & 0xffffffff);
  iVar2 = *(int *)((param_1 & 0xffffffff) + 0x18);
  uVar7 = 0;
  if (iVar2 != 0) {
    uVar3 = *(uint *)((param_1 & 0xffffffff) + 0x20);
    *puVar8 = (uint)(ushort)puVar8[7];
    do {
      uVar5 = (ulonglong)*(uint *)(uVar3 + uVar7);
      uVar6 = *(uint *)(uVar5 + 0x74);
      if (uVar6 == 0) {
        uVar6 = *(uint *)((ulonglong)uVar1 + 0x294);
      }
      uVar6 = *(uint *)((ulonglong)uVar6 + 0x14);
      if (uVar6 != 0) {
        *(undefined8 *)((longlong)puVar8 + -8) = *(undefined8 *)puVar8;
        *(ulonglong *)((longlong)puVar8 + -0x10) = uVar5;
        *(ulonglong *)((longlong)puVar8 + -0x18) = (ulonglong)uVar1;
        *(undefined8 *)((longlong)puVar8 + -0x20) = 0x1407e89f5;
        cVar4 = (*(code *)(ulonglong)uVar6)();
        puVar8 = (uint *)(ulonglong)((int)(undefined8 *)((longlong)puVar8 + -0x18) + 0xc);
        if (cVar4 != '\0') {
          uVar7 = CONCAT71((int7)(uVar7 >> 8),1);
          goto LAB_1407e8a09;
        }
      }
      uVar6 = (int)uVar7 + 4;
      uVar7 = (ulonglong)uVar6;
    } while (iVar2 << 2 != uVar6);
    uVar7 = 0;
  }
LAB_1407e8a09:
  if (_DAT_150b71715 == (*(uint *)((longlong)puVar8 + 4) ^ (uint)puVar8)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)((longlong)puVar8 + -8) = FUN_1407e8a30;
  FUN_1408802b0(*(uint *)((longlong)puVar8 + 4) ^ (uint)puVar8);
}

