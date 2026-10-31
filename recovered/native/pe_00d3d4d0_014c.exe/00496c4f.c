/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00496c4f */

bool __fastcall FUN_00496c4f(void *param_1)

{
  FARPROC pFVar1;
  bool bVar2;
  
  if (DAT_0052500c == -1) {
    pFVar1 = (FARPROC)0x0;
  }
  else {
    bVar2 = DAT_0052500c == 0;
    if (!bVar2) goto LAB_00496c7c;
    pFVar1 = FUN_00496ce3(param_1,3,"FlsGetValue2",(int *)&DAT_004f9968,(int *)&DAT_004f9970);
  }
  bVar2 = pFVar1 == (FARPROC)0x0;
LAB_00496c7c:
  return !bVar2;
}

