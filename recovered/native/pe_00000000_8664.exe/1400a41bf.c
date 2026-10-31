/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400a41bf */

void FUN_1400a41bf(longlong param_1,uint *param_2)

{
  ushort *puVar1;
  double dVar2;
  undefined4 uVar3;
  
  FUN_1400abfd5("Codepoint: U+%04X",*param_2 >> 6);
  FUN_1400b0bd1();
  FUN_1400abfd5("Visible: %d",*param_2 >> 1 & 1);
  FUN_1400abfd5("AdvanceX: %.1f",(double)(float)param_2[1]);
  FUN_1400abfd5("Pos: (%.2f,%.2f)->(%.2f,%.2f)",(double)(float)param_2[2],(double)(float)param_2[3],
                (double)(float)param_2[4],(double)(float)param_2[5]);
  dVar2 = (double)(float)param_2[9];
  FUN_1400abfd5("UV: (%.3f,%.3f)->(%.3f,%.3f)",(double)(float)param_2[6],(double)(float)param_2[7],
                (double)(float)param_2[8],dVar2);
  uVar3 = (undefined4)((ulonglong)dVar2 >> 0x20);
  if (-1 < (int)param_2[10]) {
    puVar1 = (ushort *)FUN_1400e2faf(*(undefined8 *)(param_1 + 8));
    FUN_1400abfd5("PackId: 0x%X (%dx%d rect at %d,%d)",param_2[10],puVar1[2],puVar1[3],
                  CONCAT44(uVar3,(uint)*puVar1),puVar1[1]);
  }
  FUN_1400abfd5("SourceIdx: %d",*param_2 >> 2 & 0xf);
  return;
}

