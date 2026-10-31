/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140256ab6 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140256ab6(undefined1 *param_1,char *param_2)

{
  byte bVar1;
  char cVar2;
  code *pcVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  char *pcVar7;
  undefined1 uVar9;
  undefined7 uVar10;
  undefined2 uVar11;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [56];
  ulonglong local_18;
  byte *pbVar8;
  
  uVar10 = (undefined7)((ulonglong)param_1 >> 8);
  uVar9 = SUB81(param_1,0);
  local_18 = ram0x000140613b10 ^ (ulonglong)auStack_58;
  uVar11 = 0x4c7d;
  switch(*param_1) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 1:
  case 3:
  case 5:
  case 7:
  case 9:
  case 0xb:
  case 0xd:
    break;
  case 2:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 4:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 6:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 8:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 10:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xc:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  default:
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  pcVar3 = (code *)swi(0x36);
  pcVar7 = (char *)(*pcVar3)();
  *(undefined1 *)CONCAT71(uVar10,uVar9) = *(undefined1 *)CONCAT71(uVar10,uVar9);
  *pcVar7 = *pcVar7 + (char)pcVar7;
  uVar6 = (int)auStack_50 * 0x18036;
  pbVar8 = (byte *)(ulonglong)uVar6;
  bVar4 = (byte)uVar6;
  *pbVar8 = *pbVar8 + bVar4;
  *(undefined1 *)CONCAT71(uVar10,uVar9) = *(undefined1 *)CONCAT71(uVar10,uVar9);
  *pbVar8 = *pbVar8 + bVar4;
  *(undefined1 *)CONCAT71(uVar10,uVar9) = *(undefined1 *)CONCAT71(uVar10,uVar9);
  *pbVar8 = *pbVar8 + bVar4;
  *pbVar8 = *pbVar8 + bVar4;
  bVar1 = *pbVar8;
  *pbVar8 = *pbVar8 + bVar4;
  *param_2 = *param_2 + (char)((ushort)uVar11 >> 8) + CARRY1(bVar1,bVar4);
  *(undefined1 *)CONCAT71(uVar10,uVar9) = *(undefined1 *)CONCAT71(uVar10,uVar9);
  *pbVar8 = *pbVar8 + bVar4;
  out(*(undefined4 *)param_2,uVar11);
  *(undefined1 *)CONCAT71(uVar10,uVar9) = *(undefined1 *)CONCAT71(uVar10,uVar9);
  *pbVar8 = *pbVar8 + bVar4;
  pcVar7 = (char *)(ulonglong)(uVar6 & 0x18036);
  cVar2 = *pcVar7;
  cVar5 = (char)(uVar6 & 0x18036);
  *pcVar7 = *pcVar7 + cVar5;
  if (SCARRY1(cVar2,cVar5) != *pcVar7 < '\0') {
    *(undefined1 *)CONCAT71(uVar10,uVar9) = *(undefined1 *)CONCAT71(uVar10,uVar9);
    *pcVar7 = *pcVar7 + cVar5;
  }
  *(undefined1 *)CONCAT71(uVar10,uVar9) = *(undefined1 *)CONCAT71(uVar10,uVar9);
  *pcVar7 = *pcVar7 + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

