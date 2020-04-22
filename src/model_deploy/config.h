#ifndef CONFIG_H_

#define CONFIG_H_


// The number of labels (without negative)

#define label_num 3


struct Config {


  // This must be the same as seq_length in the src/model_train/config.py

  const int seq_length = 64;


  // The number of expected consec  utive inferences for each gesture type.

  const int consecutiveInferenceThresholds[label_num] = {20, 10, 10};


  const char* output_message[label_num] = {

        "RING:\n\r"
        "          *       \n\r"
        "       *     *    \n\r"
        "     *         *  \n\r"
        "    *           * \n\r"
        "     *         *  \n\r"
        "       *     *    \n\r"
        "          *       \n\r",
        "SLOPE:\n\r"
        "        *        \n\r"
        "       *         \n\r"
        "      *          \n\r"
        "     *           \n\r"
        "    *            \n\r"
        "   *             \n\r"
        "  *              \n\r"
        " * * * * * * * * \n\r",
        "WIELD:\n\r"
        "        O        \n\r"
        "      O O O      \n\r"
        "    O   O   O    \n\r"
        "  O     O     O  \n\r"
        "O       O       O\n\r"
        "        O        \n\r"
        "        O        \n\r"
        "        O        \n\r"
        };

};


Config config;

#endif // CONFIG_H_