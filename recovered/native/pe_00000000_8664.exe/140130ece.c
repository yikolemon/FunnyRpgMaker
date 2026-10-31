/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140130ece */

void FUN_140130ece(double param_1,double param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  ulonglong uVar6;
  
  dVar5 = 0.0;
  if (0.0 <= param_1) {
    dVar5 = param_1;
  }
  bVar1 = DAT_140e8e0e8 < param_1;
  uVar6 = -(ulonglong)bVar1 & (ulonglong)DAT_140e8e0e8;
  dVar4 = 0.0;
  if (0.0 <= param_2) {
    dVar4 = param_2;
  }
  uVar2 = FUN_140119c5a(-(ulonglong)(DAT_140e8e0e8 < param_2) & (ulonglong)DAT_140e8e0e8 |
                        ~-(ulonglong)(DAT_140e8e0e8 < param_2) & (ulonglong)dVar4);
  uVar3 = FUN_140119c5a(uVar6 | ~-(ulonglong)bVar1 & (ulonglong)dVar5);
  FUN_140130e98(uVar3,uVar2);
  return;
}

