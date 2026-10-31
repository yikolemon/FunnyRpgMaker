/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800e2e9f */

void FUN_1800e2e9f(void)

{
  undefined8 local_18;
  
  do {
    do {
      local_18 = 1000;
      FUN_1800c50db(&local_18);
      FUN_1800e6044();
      (**(code **)(*DAT_180418890 + 0x58))();
    } while (DAT_180418c40 != '\x01');
    DAT_180418c40 = '\0';
    FUN_1800e6070(&DAT_180418b98);
  } while( true );
}

