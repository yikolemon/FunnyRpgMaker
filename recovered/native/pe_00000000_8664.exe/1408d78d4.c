/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408d78d4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1408d78d4(void)

{
  uint uVar1;
  undefined8 uVar2;
  code *pcVar3;
  int *piVar4;
  undefined8 unaff_RBX;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  uint extraout_XMM0_Da;
  uint extraout_XMM0_Db;
  uint unaff_XMM8_Da;
  uint unaff_XMM8_Db;
  
  uVar6 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  uVar5 = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x18);
  uVar1 = *(uint *)((ulonglong)*(uint *)(uVar6 + 8) + 0xc);
  if ((uVar1 >> 3 & 1) == 0) {
    uVar1 = *(uint *)(uVar6 + 8);
    *(undefined8 *)(uVar5 - 8) = unaff_RBX;
    *(undefined8 *)(uVar5 - 0x10) = unaff_RSI;
    piVar4 = (int *)(ulonglong)*(uint *)(uVar6 + 8);
    if (((*(uint *)((ulonglong)uVar1 + 0xc) & 0xc0) == 0) || (*piVar4 != piVar4[1])) {
      *(ulonglong *)(uVar5 - 0x18) = (ulonglong)(uint)piVar4[4];
      *(undefined8 *)(uVar5 - 0x20) = 0x1408d790f;
      piVar4 = (int *)FUN_1408d295f();
      uVar7 = (ulonglong)piVar4 & 0xffffffff;
      uVar2 = *(undefined8 *)(uVar5 - 0x18);
      if ((int)piVar4 != -1) {
        *(undefined8 *)(uVar5 - 0x18) = 0;
        *(ulonglong *)(uVar5 - 0x20) = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x10);
        *(ulonglong *)(uVar6 - 8) =
             CONCAT44(extraout_XMM0_Db ^ unaff_XMM8_Db,extraout_XMM0_Da ^ unaff_XMM8_Da);
        *(undefined8 *)(uVar5 - 0x28) = *(undefined8 *)(uVar6 - 4);
        *(undefined8 *)(uVar5 - 0x30) = *(undefined8 *)(uVar6 - 8);
        *(ulonglong *)(uVar5 - 0x38) = uVar7;
        pcVar3 = _DAT_150c359d4;
        *(undefined8 *)(uVar5 - 0x40) = 0x1408d7934;
        piVar4 = (int *)(*pcVar3)(uVar2);
        if ((int)piVar4 != 0) {
          *(ulonglong *)(uVar5 - 0x40) = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x18);
          *(ulonglong *)(uVar5 - 0x48) = uVar7;
          pcVar3 = _DAT_150c358c3;
          *(undefined8 *)(uVar5 - 0x50) = 0x1408d7943;
          piVar4 = (int *)(*pcVar3)();
          if (((int)piVar4 != 0) &&
             (piVar4 = (int *)(ulonglong)*(uint *)(uVar6 - 0x10),
             *(uint *)(uVar6 - 0x10) == *(uint *)(uVar6 - 0x18))) {
            piVar4 = (int *)(ulonglong)*(uint *)(uVar6 - 0xc);
          }
        }
      }
    }
    return (ulonglong)piVar4 & 0xffffffffffffff00;
  }
  return CONCAT71((uint7)(uint3)(uVar1 >> 0xb),1);
}

