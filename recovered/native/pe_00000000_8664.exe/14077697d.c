/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14077697d */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14077697d(undefined4 param_1)

{
  char cVar1;
  float *pfVar2;
  float10 in_ST0;
  
  pfVar2 = (float *)(ulonglong)((int)&stack0xfffffffffffffff8 - 0xc);
  *pfVar2 = 3.5614342e-29;
  pfVar2[-2] = 3.8658178;
  pfVar2[-1] = 1.4013e-45;
  FUN_14078508e();
  pfVar2[-2] = 3.865819;
  pfVar2[-1] = 1.4013e-45;
  cVar1 = FUN_14076dbea();
  if (cVar1 != '\0') {
    pfVar2[-2] = 3.8658211;
    pfVar2[-1] = 1.4013e-45;
    FUN_140769df0();
    pfVar2[2] = (float)in_ST0;
    *pfVar2 = pfVar2[2] * _DAT_150a2f86b;
    pfVar2[-2] = 3.8658278;
    pfVar2[-1] = 1.4013e-45;
    FUN_140769899();
    *pfVar2 = (float)param_1;
    pfVar2[1] = 0.0;
    pfVar2[-2] = 3.8658316;
    pfVar2[-1] = 1.4013e-45;
    FUN_140784f49();
    pfVar2[-2] = 3.8658328;
    pfVar2[-1] = 1.4013e-45;
    FUN_140769952();
    thunk_FUN_140762c14();
    return;
  }
  return;
}

